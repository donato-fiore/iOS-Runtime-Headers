// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUDATEPARSERLIBRARY_H
#define TSUDATEPARSERLIBRARY_H

@class NSMutableArray, NSCondition;

#import <Foundation/Foundation.h>

#import "TSULocale.h"

@interface TSUDateParserLibrary : NSObject {
    TSULocale *mLocale;
    NSUInteger mMaxPermittedParsers;
    NSUInteger mNumberOfUses;
    NSUInteger mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}




-(id)checkoutDateParser;
-(id)initWithLocale:(id)arg0 ;
-(void)prepareDateParserInBackground;
-(void)returnDateParser:(id)arg0 ;


@end


#endif