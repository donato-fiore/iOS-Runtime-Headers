// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITYPOLOGYRECORDPHRASEBOUNDARYADJUSTMENT_H
#define TITYPOLOGYRECORDPHRASEBOUNDARYADJUSTMENT_H



#import "TITypologyRecord.h"
#import "TIKeyboardConfiguration.h"
#import "TIKeyboardState.h"

@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord

@property (nonatomic) BOOL forwardAdjustment; // ivar: _forwardAdjustment
@property (nonatomic) int granularity; // ivar: _granularity
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig; // ivar: _keyboardConfig
@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState


+(BOOL)supportsSecureCoding;
-(id)currentKeyboardState;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)applyToStatistic:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg0 ;


@end


#endif