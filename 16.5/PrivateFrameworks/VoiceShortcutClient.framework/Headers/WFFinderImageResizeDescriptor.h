// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFINDERIMAGERESIZEDESCRIPTOR_H
#define WFFINDERIMAGERESIZEDESCRIPTOR_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WFFinderImageResizeDescriptor : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger format; // ivar: _format
@property (readonly, nonatomic) BOOL preserveMetadata; // ivar: _preserveMetadata
@property (readonly, nonatomic) NSUInteger size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormat:(NSUInteger)arg0 size:(NSUInteger)arg1 preserveMetadata:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif