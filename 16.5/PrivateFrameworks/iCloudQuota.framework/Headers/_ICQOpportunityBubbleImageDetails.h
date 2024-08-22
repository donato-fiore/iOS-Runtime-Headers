// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICQOPPORTUNITYBUBBLEIMAGEDETAILS_H
#define _ICQOPPORTUNITYBUBBLEIMAGEDETAILS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _ICQOpportunityBubbleImageDetails : NSObject

@property (copy, nonatomic) NSString *urlFor1x; // ivar: _urlFor1x
@property (copy, nonatomic) NSString *urlFor2x; // ivar: _urlFor2x
@property (copy, nonatomic) NSString *urlFor3x; // ivar: _urlFor3x


-(id)getURLForScale:(NSInteger)arg0 ;
-(id)initWithServerDictionary:(id)arg0 ;


@end


#endif