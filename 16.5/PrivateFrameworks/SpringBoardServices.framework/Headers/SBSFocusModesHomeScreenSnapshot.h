// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSFOCUSMODESHOMESCREENSNAPSHOT_H
#define SBSFOCUSMODESHOMESCREENSNAPSHOT_H

@class NSString, BSMachPortSendRight;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSFocusModesHomeScreenSnapshot : NSObject <BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *focusModeIdentifier; // ivar: _focusModeIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *listIdentifier; // ivar: _listIdentifier
@property (retain, nonatomic) BSMachPortSendRight *machPortSendRight; // ivar: _machPortSendRight
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsListVisible; // ivar: _wantsListVisible


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithListIdentifier:(id)arg0 focusModeIdentifier:(id)arg1 machPortSendRight:(id)arg2 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif