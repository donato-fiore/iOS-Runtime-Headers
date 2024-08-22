// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCHOOSEFROMLISTDIALOGRESPONSE_H
#define WFCHOOSEFROMLISTDIALOGRESPONSE_H

@class NSString, NSArray;
@protocol BSXPCSecureCoding, NSSecureCoding;


#import "WFDialogResponse.h"

@interface WFChooseFromListDialogResponse : WFDialogResponse <BSXPCSecureCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *selectedItems; // ivar: _selectedItems
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif