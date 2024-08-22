// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITEMPLATEDBADGEIMAGECONSUMER_H
#define SKUITEMPLATEDBADGEIMAGECONSUMER_H

@class UIColor;


#import "SKUIImageDataConsumer.h"

@interface SKUITemplatedBadgeImageConsumer : SKUIImageDataConsumer

@property (retain, nonatomic) UIColor *templateColor; // ivar: _templateColor


-(id)objectForData:(id)arg0 response:(id)arg1 error:(*id)arg2 ;


@end


#endif