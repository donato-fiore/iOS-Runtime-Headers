// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TITYPOLOGYRECORDAUTOCORRECTIONS_H
#define TITYPOLOGYRECORDAUTOCORRECTIONS_H



#import "TITypologyRecord.h"
#import "TIAutocorrectionList.h"
#import "TIKeyboardState.h"
#import "TICandidateRequestToken.h"

@interface TITypologyRecordAutocorrections : TITypologyRecord

@property (retain, nonatomic) TIAutocorrectionList *autocorrections; // ivar: _autocorrections
@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState
@property (nonatomic) BOOL listUIDisplayed; // ivar: _listUIDisplayed
@property (retain, nonatomic) TICandidateRequestToken *requestToken; // ivar: _requestToken


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