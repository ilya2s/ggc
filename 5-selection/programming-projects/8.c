#include <stdio.h>

int compute_hours(int departure_time) {
    return departure_time / 60;
}

int compute_minutes(int departure_time) {
    return departure_time - (departure_time / 60) * 60;
}

int transform_hours(int hours) {
    return (hours > 12) ? hours - 12 : (hours == 0) ? hours + 12 : hours;
}

int main(void) {
    int hours, minutes, time, departure, arrival, d_hours, d_minutes, a_hours,
        a_minutes;
    int d1 = 480, a1 = 616;
    int d2 = 583, a2 = 712;
    int d3 = 679, a3 = 811;
    int d4 = 767, a4 = 900;
    int d5 = 840, a5 = 968;
    int d6 = 945, a6 = 1075;
    int d7 = 1140, a7 = 1280;
    int d8 = 1305, a8 = 1438;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    time = (60 * hours) + minutes;

    // time < midway between d1 and d2 => (closest to d1)
    if (time < d1 + (d2 - d1) / 2) {
        departure = d1;
        arrival = a1;
    }
    else if (time < d2 + (d3 - d2) / 2) {
        departure = d2;
        arrival = a2;
    }
    else if (time < d3 + (d4 - d3) / 2) {
        departure = d3;
        arrival = a3;
    }
    else if (time < d4 + (d5 - d4) / 2) {
        departure = d4;
        arrival = a4;
    }
    else if (time < d5 + (d6 - d5) / 2) {
        departure = d5;
        arrival = a5;
    }
    else if (time < d6 + (d7 - d6) / 2) {
        departure = d6;
        arrival = a6;
    }
    else if (time < d7 + (d8 - d7) / 2) {
        departure = d7;
        arrival = a7;
    }
    else {
        departure = d8;
        arrival = a8;
    }

    d_hours = compute_hours(departure);
    d_minutes = compute_minutes(departure);

    a_hours = compute_hours(arrival);
    a_minutes = compute_minutes(arrival);

    printf("Closest departure time is %.2d:%.2d %s, arrivign at %.2d:%.2d %s\n",
            transform_hours(d_hours),
            d_minutes,
            d_hours >= 12 ? "p.m." : "a.m.",
            transform_hours(a_hours),
            a_minutes,
            a_hours >= 12 ? "p.m." : "a.m.");

    return 0;
}

