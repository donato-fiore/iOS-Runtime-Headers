// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQOPPORTUNITYBUBBLESPECIFICATION_H
#define ICQOPPORTUNITYBUBBLESPECIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ICQOpportunityBubbleDetailsSpecification.h"
#import "_ICQOpportunityBubbleReportingSpecification.h"
#import "ICQOpportunitySheetDetailsSpecification.h"

@interface ICQOpportunityBubbleSpecification : NSObject

@property (copy, nonatomic) NSString *appId; // ivar: _appId
@property (retain, nonatomic) ICQOpportunityBubbleDetailsSpecification *bubbleDetails; // ivar: _bubbleDetails
@property (retain, nonatomic) _ICQOpportunityBubbleReportingSpecification *reportingDetails; // ivar: _reportingDetails
@property (retain, nonatomic) ICQOpportunitySheetDetailsSpecification *sheetDetails; // ivar: _sheetDetails


-(id)initWithOpportunityBubble:(id)arg0 andOpportunitySheet:(id)arg1 ;
-(id)serverUIURL;


@end


#endif