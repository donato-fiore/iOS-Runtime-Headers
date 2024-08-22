// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPKNOWNFIELDDATAREFERENCE_H
#define TSPKNOWNFIELDDATAREFERENCE_H



#import "TSPKnownFieldStringValue.h"
#import "TSPData.h"

@interface TSPKnownFieldDataReference : TSPKnownFieldStringValue {
    TSPData *_data;
}




-(id)debugDescription;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif