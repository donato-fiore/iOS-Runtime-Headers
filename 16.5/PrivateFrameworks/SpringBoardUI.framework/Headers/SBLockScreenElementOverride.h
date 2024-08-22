// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENELEMENTOVERRIDE_H
#define SBLOCKSCREENELEMENTOVERRIDE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBLockScreenElementOverride : NSObject

@property (nonatomic) NSInteger element; // ivar: _element
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (copy, nonatomic) NSString *text; // ivar: _text


+(id)overrideForElement:(NSInteger)arg0 ;
+(id)overrideForHiddenElement:(NSInteger)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif