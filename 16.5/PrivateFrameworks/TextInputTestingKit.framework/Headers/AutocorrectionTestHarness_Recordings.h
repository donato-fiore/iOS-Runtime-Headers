// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUTOCORRECTIONTESTHARNESS_RECORDINGS_H
#define AUTOCORRECTIONTESTHARNESS_RECORDINGS_H



#import "AutocorrectionTestHarness.h"

@interface AutocorrectionTestHarness_Recordings : AutocorrectionTestHarness



-(BOOL)compareExpectedValue:(id)arg0 withResult:(id)arg1 ;
-(id)emptyResultForTest:(id)arg0 ;
-(id)initWithAttributes:(id)arg0 ;
-(id)tryTouchingPoint:(struct CGPoint )arg0 ;
-(id)typePoints:(id)arg0 ;
-(id)typeTest:(id)arg0 withError:(id)arg1 ;
-(void)drainRunLoopEvents;


@end


#endif