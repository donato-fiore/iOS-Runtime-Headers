// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFINPUTTEXTDIALOGRESPONSE_H
#define WFINPUTTEXTDIALOGRESPONSE_H

@class NSString;
@protocol NSSecureCoding;


#import "WFDialogResponse.h"

@interface WFInputTextDialogResponse : WFDialogResponse <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *inputtedText; // ivar: _inputtedText


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputtedText:(id)arg0 cancelled:(BOOL)arg1 ;
-(id)initWithResponseCode:(NSInteger)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif