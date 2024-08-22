// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPDATADETECTORS_H
#define TSWPDATADETECTORS_H


#import <Foundation/Foundation.h>


@interface TSWPDataDetectors : NSObject



+(BOOL)detectedDataInString:(id)arg0 scanRange:(struct _NSRange )arg1 withTextCheckingTypes:(NSUInteger)arg2 ;
+(id)calculateScanRanges:(id)arg0 changedRange:(struct _NSRange )arg1 ;
+(id)scanString:(id)arg0 scanRanges:(id)arg1 ;
+(void)registerDataDetectorClass:(Class)arg0 ;


@end


#endif