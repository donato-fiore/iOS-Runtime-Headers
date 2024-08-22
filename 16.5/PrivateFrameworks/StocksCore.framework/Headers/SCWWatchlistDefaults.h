// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWWATCHLISTDEFAULTS_H
#define SCWWATCHLISTDEFAULTS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SCWWatchlistDefaults : NSObject

@property (readonly, copy, nonatomic) NSArray *defaultSymbols; // ivar: _defaultSymbols


+(id)_iOS10DefaultsForCurrentCountry;
+(id)_iOS7DefaultsForCurrentCountry;
+(id)_legacyDefaultSymbolsByCountryCode;
+(id)defaultsForCurrentCountry;
+(id)defaultsHistoryForCurrentCountry;
+(id)defaultsWithDefaultSymbols:(id)arg0 ;
+(id)emptyDefaults;
-(id)defaultsByAppendingDefaults:(id)arg0 ;
-(id)initWithDefaultSymbols:(id)arg0 ;


@end


#endif