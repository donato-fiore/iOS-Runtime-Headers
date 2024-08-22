// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REPEATEDCONNFAILUREDETECTOR_H
#define REPEATEDCONNFAILUREDETECTOR_H

@class NSSet, NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface RepeatedConnFailureDetector : NSObject {
    NSSet *_whitelistedDaemons;
    NSMutableDictionary *_flowRecords;
    NSMutableDictionary *_reportDampeners;
    NSDate *_lastFlush;
}




-(id)init;
-(void)_excessiveConnFailuresDetectedOn:(id)arg0 owner:(id)arg1 ;
-(void)_flush;
-(void)dealloc;
-(void)invalidate;
-(void)noteSuspectFlow:(id)arg0 withOwner:(id)arg1 ;


@end


#endif