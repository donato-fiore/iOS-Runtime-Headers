// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCMOCKDATADETECTORELEMENT_H
#define VKCMOCKDATADETECTORELEMENT_H

@class NSArray;


#import "VKCTextDataDetectorElement.h"

@interface VKCMockDataDetectorElement : VKCTextDataDetectorElement {
    NSUInteger _dataDetectorTypes;
    NSArray *_boundingQuads;
    _NSRange _characterRange;
}




-(NSUInteger)dataDetectorTypes;
-(id)boundingQuads;
-(id)initWithDictionary:(id)arg0 ;
-(struct _NSRange )characterRange;


@end


#endif