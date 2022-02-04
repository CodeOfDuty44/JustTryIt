CXX 		= g++
CXXFLAGS	= -std=c++11
CPPFLAGS	= -I /usr/local/cuda/include -I inc/
LDFLAGS 	= -L /usr/local/cuda/lib64 \
		  	  -L /usr/lib/aarch64-linux-gnu/libnvparsers.so

LDLIBS 		= -lcudart -lnvinfer -lnvparsers -lboost_program_options -lnvonnxparser

OPENCV		= `pkg-config --cflags --libs opencv`

SRCS		= main.cpp src/Derived.cpp src/Base.cpp
PROG		= deneme

$(PROG):$(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(PROG) $(CPPFLAGS) $(LDLIBS) $(LDFLAGS) $(OPENCV)

clean:
	$(RM) $(PROG)
