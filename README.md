graph TD
    A([Начало]) --> B[setlocale(LC_ALL, "RUS")<br>d = 1.0]
    B --> C[/Вывод: "Введите x и y: "/]
    C --> D[/Ввод: x, y/]
    D --> E["F = (cos(y)*cos(y) + 2.4*d) / (exp(y) + log(sin(x)*sin(x) + 6.0))"]
    E --> F[/Вывод: x, y, F/]
    F --> G([Конец])

    %% Стилизация по ГОСТ (черно-белая для печати)
    style A fill:#ffffff,stroke:#000000,stroke-width:2px;
    style B fill:#ffffff,stroke:#000000,stroke-width:2px;
    style C fill:#ffffff,stroke:#000000,stroke-width:2px;
    style D fill:#ffffff,stroke:#000000,stroke-width:2px;
    style E fill:#ffffff,stroke:#000000,stroke-width:2px;
    style F fill:#ffffff,stroke:#000000,stroke-width:2px;
    style G fill:#ffffff,stroke:#000000,stroke-width:2px;

