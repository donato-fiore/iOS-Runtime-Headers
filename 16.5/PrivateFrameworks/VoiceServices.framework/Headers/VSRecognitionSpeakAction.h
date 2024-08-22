// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSRECOGNITIONSPEAKACTION_H
#define VSRECOGNITIONSPEAKACTION_H



#import "VSRecognitionAction.h"

@interface VSRecognitionSpeakAction : VSRecognitionAction {
    BOOL _shouldTerminate;
}




-(id)initWithSpokenFeedbackString:(id)arg0 willTerminate:(BOOL)arg1 ;
-(id)perform;
-(int)completionType;


@end


#endif