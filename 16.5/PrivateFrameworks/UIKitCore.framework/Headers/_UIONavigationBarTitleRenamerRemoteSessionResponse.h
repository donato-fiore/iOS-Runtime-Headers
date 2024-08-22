// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIONAVIGATIONBARTITLERENAMERREMOTESESSIONRESPONSE_H
#define _UIONAVIGATIONBARTITLERENAMERREMOTESESSIONRESPONSE_H

@class BSActionResponse, NSString;



@interface _UIONavigationBarTitleRenamerRemoteSessionResponse : BSActionResponse

@property (readonly, nonatomic) _NSRange selectedRange;
@property (readonly, nonatomic) BOOL shouldEndEditing;
@property (readonly, nonatomic) NSString *text;


+(id)didCancelSessionResponse;
+(id)didEndEditingResponse;
+(id)shouldEndEditingResponse:(BOOL)arg0 ;
+(id)willBeginRenamingResponseWithText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(int)_action;


@end


#endif