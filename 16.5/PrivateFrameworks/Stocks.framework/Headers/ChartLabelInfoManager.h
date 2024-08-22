// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHARTLABELINFOMANAGER_H
#define CHARTLABELINFOMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "ChartLabelInfo.h"

@interface ChartLabelInfoManager : NSObject {
    ChartLabelInfo *_yAxisLabelInfo;
    NSMutableArray *_monthLabelInfoArrays;
    NSMutableArray *_integerLabelInfoArray;
    BOOL _use24hrTime;
}




+(id)chartLabelFont;
+(id)sharedLabelInfoManager;
+(struct __CFString *)_CFDateFormatterPropertyForMonthLabelLength:(NSInteger)arg0 ;
+(void)clearSharedManager;
-(BOOL)use24hrTime;
-(id)init;
-(id)labelInfoForYAxis;
-(id)labelInfoWithString:(id)arg0 ;
-(id)labelInfoWithUnsignedInteger:(NSUInteger)arg0 ;
-(id)monthLabelInfoArrayForLabelLength:(NSInteger)arg0 ;
-(void)dealloc;
-(void)resetLocale;


@end


#endif