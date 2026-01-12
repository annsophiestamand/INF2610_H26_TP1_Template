#include "section4.h"

Incident incidents[] = {
    {  1, CRITICAL,     1710000100 },
    {  2, ERROR,        1710000120 },
    {  3, FAILED_LOGIN, 1710000150 },
    {  4, ERROR,        1710000180 },
    {  5, CRITICAL,     1710000200 },
    {  6, FAILED_LOGIN, 1710000250 },
    {  7, ERROR,        1710000300 },
    {  8, CRITICAL,     1710000310 },
    {  9, FAILED_LOGIN, 1710000350 },
    { 10, ERROR,        1710000400 },

    { 11, CRITICAL,     1710000450 },
    { 12, FAILED_LOGIN, 1710000500 },
    { 13, ERROR,        1710000520 },
    { 14, FAILED_LOGIN, 1710000550 },
    { 15, CRITICAL,     1710000600 },
    { 16, ERROR,        1710000620 },
    { 17, FAILED_LOGIN, 1710000650 },
    { 18, ERROR,        1710000700 },
    { 19, CRITICAL,     1710000720 },
    { 20, FAILED_LOGIN, 1710000750 },

    { 21, ERROR,        1710000800 },
    { 22, CRITICAL,     1710000820 },
    { 23, FAILED_LOGIN, 1710000850 },
    { 24, ERROR,        1710000900 },
    { 25, CRITICAL,     1710000950 },
    { 26, FAILED_LOGIN, 1710001000 },
    { 27, ERROR,        1710001020 },
    { 28, CRITICAL,     1710001050 },
    { 29, FAILED_LOGIN, 1710001100 },
    { 30, ERROR,        1710001150 }
};

const int INCIDENT_COUNT = sizeof(incidents) / sizeof(incidents[0]);