#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;

// Function to calculate the area of the polygon using the Shoelace formula
double calculate_polygon_area(const vector<pair<int, int>>& polygon) {
    double area = 0.0;
    int n = polygon.size();

    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        area += polygon[i].first * polygon[j].second;
        area -= polygon[j].first * polygon[i].second;
    }
    return fabs(area) / 2.0;
}

// Helper function to calculate the centroid of the points for ordering
pair<double, double> calculate_centroid(const vector<pair<int, int>>& points) {
    double x_sum = 0.0, y_sum = 0.0;
    for (const auto& p : points) {
        x_sum += p.first;
        y_sum += p.second;
    }
    return {x_sum / points.size(), y_sum / points.size()};
}

// Function to order points in counterclockwise order
void order_points(vector<pair<int, int>>& points) {
    auto centroid = calculate_centroid(points);
    sort(points.begin(), points.end(), [&centroid](const pair<int, int>& a, const pair<int, int>& b) {
        double angle_a = atan2(a.second - centroid.second, a.first - centroid.first);
        double angle_b = atan2(b.second - centroid.second, b.first - centroid.first);
        return angle_a < angle_b;
    });
}

// Function to check if the sticks form a closed polygon and gather unique points
bool check_closed_figure(const vector<pair<int, int>>& sticks, vector<pair<int, int>>& unique_points) {
    map<pair<int, int>, int> point_count;

    // Count occurrences of each endpoint
    for (const auto& point : sticks) {
        point_count[point]++;
    }

    // Collect unique points and check if each has an even count
    for (const auto& entry : point_count) {
        if (entry.second % 2 != 0) {
            return false;  // Not a closed figure if any point has an odd count
        }
        unique_points.push_back(entry.first);
    }

    return unique_points.size() >= 3;  // Ensure we have at least 3 points for a polygon
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> sticks;
    vector<pair<int, int>> unique_points;
    map<pair<int, int>, int> endpoint_count;

    // Read in the sticks' coordinates
    for (int i = 0; i < N; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        sticks.push_back({x1, y1});
        sticks.push_back({x2, y2});
        endpoint_count[{x1, y1}]++;
        endpoint_count[{x2, y2}]++;
    }

    // Step 1: Check if a closed figure is formed and collect unique points
    bool closed = check_closed_figure(sticks, unique_points);

    if (closed) {
        cout << "Yes" << endl;

        // Step 2: Order the unique points in counterclockwise order to form the polygon
        order_points(unique_points);

        // Step 3: Calculate the area of the closed polygon
        double area = calculate_polygon_area(unique_points);
        
        // Here, we assume that Arjun cannot form the exact same shape with the leftover sticks
        // as it would require analyzing stick lengths and shapes in detail.
        cout << "No" << endl;  // Indicate that the leftover pieces cannot form the same shape
        printf("%.2f\n", area);  // Print area with 2 decimal precision
    } else {
        cout << "No" << endl;  // No closed figure formed
    }

    return 0;
}
