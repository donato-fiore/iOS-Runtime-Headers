// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSWIDGETCONTENT_H
#define TPSWIDGETCONTENT_H

@class NSDictionary;


#import "TPSContent.h"

@interface TPSWidgetContent : TPSContent

@property (copy, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (nonatomic) NSInteger priority; // ivar: _priority


+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 metadata:(id)arg1 ;
-(id)titleContent;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif