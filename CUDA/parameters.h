#ifndef _PARA_H
#define _PARA_H
/* the parameters of the program */

// #define USE_VARIABLE


// #ifdef USE_VARIABLE

/* total number of categories */
const size_t m = 4;

/* maximum number for each category */
const size_t k = 10;

/* number of periods */
const size_t T = 5;

// /* number of samples */
// const size_t numSamples = 10;

/* storing cost for each item */
const float h = 0.5;

/* the price of each item */
const float r = 5;

/* the ordering cost of each item */
const float c = 3;

/* the disposal cost of each item */
const float theta = 2;

/* the salvage benefit for one item */
const float s = 0.2;

/* the discount rate */
const float alpha = 0.95;

/* maximum storage */
const size_t maxhold = 3;

/* the arrival rate for poisson distribution */
const float lambda = 8;


const size_t min_demand = 0;
const size_t max_demand = 20;

const float demand_distribution[max_demand - min_demand] = {
    0.00033546, 0.0026837,  0.0107348,  0.02862614, 0.05725229,
    0.09160366, 0.12213822, 0.13958653, 0.13958653, 0.12407692,
    0.09926153, 0.07219021, 0.0481268 , 0.02961649, 0.01692371,
    0.00902598, 0.00451299, 0.00212376, 0.00094389, 0.00039743
};

// #endif

// #ifdef USE_MACRO

// /* total number of categories */
// #define c_m = 4;

// /* maximum number for each category */
// #define c_k = 10;

// /* number of periods */
// #define c_T = 5;

// /* number of samples */
// #define c_numSamples = 10;

// /* storing cost for each item */
// #define c_h = 0.5;

// /* the price of each item */
// #define c_r = 5;

//  the ordering cost of each item 
// #define c_c = 3;

// /* the disposal cost of each item */
// #define c_theta = 2;

// /* the salvage benefit for one item */
// #define c_s = 1;

// /* the discount rate */
// #define c_alpha = 0.95;

// /* maximum storage */
// #define c_maxhold = 3;

// /* the arrival rate for poisson distribution */
// #define c_lambda = 8;

// #endif 

#endif
