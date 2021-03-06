/*
 Day.h
 AppSalesMobile
 
 * Copyright (c) 2008, omz:software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the <organization> nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY omz:software ''AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL <copyright holder> BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <UIKit/UIKit.h>
@class Country;

@interface Day : NSObject {
	NSMutableDictionary *countries;
	NSDate *date;
	NSString *cachedWeekEndDateString;
	UIColor *cachedWeekDayColor;
	NSString *cachedDayString;
	BOOL isWeek;
	BOOL wasLoadedFromDisk;
	NSString *name;
}

@property (retain) NSDate *date;
@property (retain) NSMutableDictionary *countries;
@property (retain) NSString *cachedWeekEndDateString;
@property (retain) UIColor *cachedWeekDayColor;
@property (retain) NSString *cachedDayString;
@property (assign) BOOL isWeek;
@property (assign) BOOL wasLoadedFromDisk;
@property (retain) NSString *name;

- (id)initWithCSV:(NSString *)csv;
- (Country *)countryNamed:(NSString *)countryName;
- (void)setDateString:(NSString *)dateString;
- (float)totalRevenueInBaseCurrency;
- (NSString *)dayString;
- (NSString *)weekdayString;
- (NSString *)weekEndDateString;
- (NSString *)totalRevenueString;
- (UIColor *)weekdayColor;
- (NSString *)proposedFilename;
- (NSArray *)children;

@end
