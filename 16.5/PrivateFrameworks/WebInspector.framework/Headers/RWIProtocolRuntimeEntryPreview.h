// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLRUNTIMEENTRYPREVIEW_H
#define RWIPROTOCOLRUNTIMEENTRYPREVIEW_H



#import "RWIProtocolJSONObject.h"
#import "RWIProtocolRuntimeObjectPreview.h"

@interface RWIProtocolRuntimeEntryPreview : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolRuntimeObjectPreview *key;
@property (retain, nonatomic) RWIProtocolRuntimeObjectPreview *value;


-(id)initWithValue:(id)arg0 ;


@end


#endif