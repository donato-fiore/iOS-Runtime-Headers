// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMETRICSEVENTLOCATION_H
#define SSMETRICSEVENTLOCATION_H

@class NSMutableDictionary, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface SSMetricsEventLocation : NSObject {
    NSMutableDictionary *_values;
}


@property (nonatomic) NSInteger locationPosition; // ivar: _position
@property (copy, nonatomic) NSString *locationType; // ivar: _type
@property (readonly, nonatomic) NSDictionary *reportingDictionary;


-(id)valueForLocationKey:(id)arg0 ;
-(void)setValue:(id)arg0 forLocationKey:(id)arg1 ;


@end


#endif