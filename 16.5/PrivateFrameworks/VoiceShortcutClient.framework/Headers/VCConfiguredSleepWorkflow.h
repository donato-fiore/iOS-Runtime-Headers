// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCCONFIGUREDSLEEPWORKFLOW_H
#define VCCONFIGUREDSLEEPWORKFLOW_H

@class NSString;
@protocol WFGlyphDrawableItem, NSSecureCoding, NSCopying;


#import "WFDatabaseObjectDescriptor.h"

@interface VCConfiguredSleepWorkflow : WFDatabaseObjectDescriptor <WFGlyphDrawableItem, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) NSInteger backgroundColorValue; // ivar: _backgroundColorValue
@property (readonly, copy, nonatomic) NSString *bundleIdentifierForDisplay; // ivar: _bundleIdentifierForDisplay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short glyphCharacter; // ivar: _glyphCharacter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CGImage iconImage; // ivar: _iconImage
@property (readonly, nonatomic) CGFloat iconScale; // ivar: _iconScale
@property (readonly, nonatomic) BOOL isAppLaunchWorkflow; // ivar: _isAppLaunchWorkflow
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *summaryString; // ivar: _summaryString
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(struct CGSize )glyphSize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkflowIdentifier:(id)arg0 bundleIdentifierForDisplay:(id)arg1 summaryString:(id)arg2 name:(id)arg3 actionIdentifier:(id)arg4 glyphCharacter:(unsigned short)arg5 backgroundColorValue:(NSInteger)arg6 isAppLaunchWorkflow:(BOOL)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif