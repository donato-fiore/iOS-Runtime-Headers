// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMPSIMAGEANNOTATION_H
#define TCMPSIMAGEANNOTATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TCMPSImageAnnotation : NSObject <NSCopying>



@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (nonatomic) NSInteger identifier; // ivar: _identifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif