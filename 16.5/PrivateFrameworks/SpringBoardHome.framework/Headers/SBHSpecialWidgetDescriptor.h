// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHSPECIALWIDGETDESCRIPTOR_H
#define SBHSPECIALWIDGETDESCRIPTOR_H

@class CHSWidgetDescriptor, NSString;



@interface SBHSpecialWidgetDescriptor : CHSWidgetDescriptor {
    NSString *_displayName;
    NSString *_description;
}


@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sbh_canBeAddedToStack;
-(NSUInteger)hash;
-(id)_initWithType:(NSUInteger)arg0 supportedSizeClasses:(NSUInteger)arg1 ;
-(id)accentColor;
-(id)backgroundColor;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 supportedSizeClasses:(NSUInteger)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)widgetDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif