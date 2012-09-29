//
//  NSDate-TKExtensions.h
//  Pure
//
//  Created by Tomek K on 8/15/12.
//  Copyright (c) 2012 Creadhoc Sp. z.o.o www.creadhoc.pl  , Tomasz Kuzma (mapedd@mapedd.com). All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (TKExtensions)

- (NSString *)TKHourAndMinutes;

- (NSString *)TKPolishNotationDate;

- (NSString *)TKDateDayMonthNameYear;

- (NSString *)TKPolishInvertedNotationDate;

- (NSInteger)TKRealWeekday;

+ (NSDate *)dateWithYear:(NSInteger)year
                   month:(NSInteger)month
                     day:(NSInteger)day
                    hour:(NSInteger)hour
                  minute:(NSInteger)minute
                  second:(NSInteger)second;

+ (NSDate *)dateWithYear:(NSInteger)year
                   month:(NSInteger)month
                     day:(NSInteger)day;

- (NSString *)TKISO8601String;

- (NSString *)TKDateTimeString;

- (NSString *)TKYearDashMonthDashDay;



- (NSDate *)TKDateByAddingHours:(NSInteger)hours;

- (NSDate *)TKDateBySubtractingHours:(NSInteger)hours;

- (NSDate *)TKDateByAddingDays:(NSInteger)days;

- (NSDate *)TKDateBySubtractingDays:(NSInteger)days;

- (NSDate *)TKDateByAddingWeeks:(NSInteger)weeks;

- (NSDate *)TKDateBySubtractingWeeks:(NSInteger)weeks;

- (NSDate *)TKDateByAddingMonths:(NSInteger)months;

- (NSDate *)TKDateBySubtractingMonths:(NSInteger)months;

- (NSDate *)TKDateByAddingYears:(NSInteger)years;

- (NSDate *)TKDateBySubtractingYears:(NSInteger)years;

- (NSInteger)TKAgeInFullYears;

- (NSInteger)TKYear;

- (NSInteger)TKMonth;

- (NSInteger)TKDay;

- (NSInteger)TKHour;

- (NSInteger)TKMinute;

- (BOOL)isEarlierThanDate:(NSDate *)aDate;

- (BOOL)isLaterThanDate:(NSDate *)aDate;

- (NSInteger)minutesAfterDate:(NSDate *)aDate;

- (NSString *)localDescription;

- (NSDate *)TKDateByMovingToBeginningOfDay;

- (NSDate *)TKDateByMovingToEndOfDay;

- (NSInteger)TKDaysBetweenDate:(NSDate *)date;

- (BOOL)isToday;

- (BOOL)isSunday;

- (BOOL)isSaturday;

- (BOOL)daysAreTheSame:(NSDate *)date;

@end
