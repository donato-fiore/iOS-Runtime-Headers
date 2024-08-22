// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTOGGLESETTINGCONTEXTUALACTION_H
#define WFTOGGLESETTINGCONTEXTUALACTION_H



#import "WFContextualAction.h"

@interface WFToggleSettingContextualAction : WFContextualAction

@property (readonly, nonatomic) NSUInteger operation; // ivar: _operation
@property (readonly, nonatomic) NSUInteger setting; // ivar: _setting


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReversible;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSetting:(NSUInteger)arg0 operation:(NSUInteger)arg1 ;
-(id)initWithSetting:(NSUInteger)arg0 operation:(NSUInteger)arg1 unconfigured:(BOOL)arg2 ;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif