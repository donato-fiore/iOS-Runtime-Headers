// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKCONFIRMATIONDIALOGREQUEST_H
#define WFLINKCONFIRMATIONDIALOGREQUEST_H

@class WFDialogButton, NSString;
@protocol NSSecureCoding;


#import "WFLinkSnippetDialogRequest.h"

@interface WFLinkConfirmationDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) WFDialogButton *noButton; // ivar: _noButton
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) WFDialogButton *yesButton; // ivar: _yesButton


+(BOOL)supportsSecureCoding;
-(id)initWithActionMetadata:(id)arg0 showPrompt:(BOOL)arg1 dialogString:(id)arg2 viewSnippet:(id)arg3 yesText:(id)arg4 noText:(id)arg5 attribution:(id)arg6 ;
-(id)initWithActionParameterMetadata:(id)arg0 dialogString:(id)arg1 viewSnippet:(id)arg2 attribution:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 viewSnippet:(id)arg1 yesText:(id)arg2 noText:(id)arg3 attribution:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif