// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOUNTERVIEWELEMENT_H
#define SKUICOUNTERVIEWELEMENT_H

@class NSDate, NSString;


#import "SKUIViewElement.h"
#import "SKUIImageViewElement.h"

@interface SKUICounterViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIImageViewElement *backgroundImageElement;
@property (readonly, nonatomic) CGFloat changeRatePerSecond; // ivar: _changeRatePerSecond
@property (readonly, nonatomic) NSInteger counterType; // ivar: _counterType
@property (readonly, nonatomic) NSInteger dateFormatType; // ivar: _dateFormatType
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSString *numberFormat; // ivar: _numberFormat
@property (readonly, nonatomic) NSInteger startValue; // ivar: _startValue
@property (readonly, nonatomic) NSDate *startValueDate; // ivar: _startValueDate
@property (readonly, nonatomic) NSInteger stopValue; // ivar: _stopValue


-(NSInteger)currentNumberValue;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif