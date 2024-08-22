// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAENTITYPROPERTYDESCRIPTOR_H
#define VUIMEDIAENTITYPROPERTYDESCRIPTOR_H

@class NSString, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIMediaEntityPropertyDescriptor : NSObject <NSCopying>



@property (nonatomic) BOOL allowsDefaultValue; // ivar: _allowsDefaultValue
@property (retain, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger propertyType; // ivar: _propertyType
@property (copy, nonatomic) NSString *propertyValueClassName; // ivar: _propertyValueClassName
@property (nonatomic) BOOL retrievesSourcePropertiesAtFetch; // ivar: _retrievesSourcePropertiesAtFetch
@property (copy, nonatomic) NSString *sortAsName; // ivar: _sortAsName
@property (copy, nonatomic) id *sourceFilterBlock; // ivar: _sourceFilterBlock
@property (copy, nonatomic) id *sourceFilterValueBlock; // ivar: _sourceFilterValueBlock
@property (copy, nonatomic) NSSet *sourcePropertyNames; // ivar: _sourcePropertyNames
@property (nonatomic) BOOL sourceSupportsFiltering; // ivar: _sourceSupportsFiltering


+(id)_classNameFromPropertyType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)_updateSourceSupportsFiltering;


@end


#endif