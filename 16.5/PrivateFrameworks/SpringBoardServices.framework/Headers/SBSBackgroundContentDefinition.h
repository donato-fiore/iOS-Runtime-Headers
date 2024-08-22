// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSBACKGROUNDCONTENTDEFINITION_H
#define SBSBACKGROUNDCONTENTDEFINITION_H

@class NSString;
@protocol BSXPCCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBSBackgroundContentDefinition : NSObject <BSXPCCoding, BSDescriptionProviding>



@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithSceneIdentifier:(id)arg0 clientBundleIdentifier:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif