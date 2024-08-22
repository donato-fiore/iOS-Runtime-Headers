// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWDESCRIPTOR_H
#define WFWORKFLOWDESCRIPTOR_H

@class NSString;
@protocol WFGlyphDrawableItem;


#import "WFDatabaseObjectDescriptor.h"

@interface WFWorkflowDescriptor : WFDatabaseObjectDescriptor <WFGlyphDrawableItem>



@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // ivar: _associatedAppBundleIdentifier
@property (readonly, nonatomic) NSInteger color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short glyphCharacter; // ivar: _glyphCharacter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CGImage iconImage; // ivar: _iconImage
@property (readonly, nonatomic) CGFloat iconImageScale; // ivar: _iconImageScale
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)externalURLForViewing;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 color:(NSInteger)arg2 glyphCharacter:(unsigned short)arg3 associatedAppBundleIdentifier:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif