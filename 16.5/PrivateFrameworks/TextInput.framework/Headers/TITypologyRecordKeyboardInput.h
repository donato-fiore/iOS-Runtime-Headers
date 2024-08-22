// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITYPOLOGYRECORDKEYBOARDINPUT_H
#define TITYPOLOGYRECORDKEYBOARDINPUT_H



#import "TITypologyRecord.h"
#import "TIKeyboardInput.h"
#import "TIKeyboardConfiguration.h"
#import "TIKeyboardState.h"
#import "TIKeyboardOutput.h"

@interface TITypologyRecordKeyboardInput : TITypologyRecord

@property (retain, nonatomic) TIKeyboardInput *input; // ivar: _input
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig; // ivar: _keyboardConfig
@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState
@property (retain, nonatomic) TIKeyboardOutput *output; // ivar: _output


+(BOOL)supportsSecureCoding;
-(id)changedText;
-(id)currentKeyboardState;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(id)textSummary;
-(void)applyToStatistic:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg0 ;


@end


#endif