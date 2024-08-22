// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTRECORDEDACTIONSTREAM_H
#define ACTRECORDEDACTIONSTREAM_H

@class NSString, NSArray;
@protocol ACTUserActionStreaming, ACTUserActionStreamDelegate;

#import <Foundation/Foundation.h>

#import "ACTUserMentalCursor.h"
#import "TIErrorGenerator.h"
#import "TTKTestCase.h"
#import "TIKeyboardTyperUserModel.h"

@interface ACTRecordedActionStream : NSObject <ACTUserActionStreaming>



@property (retain, nonatomic) ACTUserMentalCursor *cursor; // ivar: _cursor
@property (retain) NSObject<ACTUserActionStreaming> *dataSynthesizer; // ivar: _dataSynthesizer
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ACTUserActionStreamDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TIErrorGenerator *errorGenerator; // ivar: _errorGenerator
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *intendedText;
@property (nonatomic) CGFloat lastTimestamp; // ivar: _lastTimestamp
@property (nonatomic) unsigned int randomNumberSeed; // ivar: _randomNumberSeed
@property (readonly) Class superclass;
@property (retain, nonatomic) TTKTestCase *testCase; // ivar: _testCase
@property (nonatomic) NSUInteger touchEventCursor; // ivar: _touchEventCursor
@property (retain, nonatomic) NSArray *touchEventsForInputSegments; // ivar: _touchEventsForInputSegments
@property (retain, nonatomic) TIKeyboardTyperUserModel *userModel; // ivar: _userModel


+(id)userActionStreamWithParameters:(id)arg0 delegate:(id)arg1 ;
-(BOOL)inPartialCandidateSelection;
-(BOOL)isFinished;
-(id)initWithParameters:(id)arg0 delegate:(id)arg1 ;
-(id)nextUserAction;
-(void)configureWithParameters:(id)arg0 ;
-(void)resetForIntendedSegments:(id)arg0 expectedSegments:(id)arg1 ;
-(void)stepCursor;


@end


#endif