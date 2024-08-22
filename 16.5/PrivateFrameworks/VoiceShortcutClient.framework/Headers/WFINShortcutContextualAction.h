// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFINSHORTCUTCONTEXTUALACTION_H
#define WFINSHORTCUTCONTEXTUALACTION_H

@class INShortcut;


#import "WFContextualAction.h"

@interface WFINShortcutContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) INShortcut *shortcut; // ivar: _shortcut


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)icon;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithINShortcut:(id)arg0 ;
-(id)runDescriptorForSurface:(NSUInteger)arg0 ;
-(id)runRequestForSurface:(NSUInteger)arg0 ;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif