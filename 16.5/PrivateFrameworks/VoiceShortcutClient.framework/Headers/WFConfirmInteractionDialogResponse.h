// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONFIRMINTERACTIONDIALOGRESPONSE_H
#define WFCONFIRMINTERACTIONDIALOGRESPONSE_H

@class NSString;
@protocol BSXPCSecureCoding, NSSecureCoding;


#import "WFDialogResponse.h"

@interface WFConfirmInteractionDialogResponse : WFDialogResponse <BSXPCSecureCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger interactionResponseCode; // ivar: _interactionResponseCode
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)shouldDismissDialogInTransientMode;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInteractionResponseCode:(NSUInteger)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif