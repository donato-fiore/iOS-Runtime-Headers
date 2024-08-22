// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICRADIORESPONSE_H
#define ICRADIORESPONSE_H

@class NSDictionary, NSDate, NSError;

#import <Foundation/Foundation.h>

#import "ICStoreDialogResponse.h"
#import "ICURLAggregatedPerformanceMetrics.h"

@interface ICRadioResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *contentDictionary;
@property (readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics; // ivar: _performanceMetrics
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly, copy, nonatomic) NSError *serverError;
@property (readonly, nonatomic) NSInteger version;


-(id)initWithResponseDictionary:(id)arg0 expirationDate:(id)arg1 ;
-(id)initWithURLResponse:(id)arg0 ;


@end


#endif