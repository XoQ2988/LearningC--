#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}


int main() {
    //Namespace = Provides a soliution for preventing name conflicts
    //            in large projects. Each entity neads a unique name.
    //            A namespace allow for identically named entities as
    //            long as the namespaces are different.

    using namespace first;

    std::cout << x << "\n";

    return 0;
}
