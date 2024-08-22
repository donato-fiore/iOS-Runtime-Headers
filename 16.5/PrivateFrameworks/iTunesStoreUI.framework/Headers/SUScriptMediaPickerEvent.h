// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTMEDIAPICKEREVENT_H
#define SUSCRIPTMEDIAPICKEREVENT_H



#import "SUScriptObject.h"
#import "SUScriptMediaItemCollection.h"

@interface SUScriptMediaPickerEvent : SUScriptObject {
    SUScriptMediaItemCollection *_collection;
}


@property (readonly) SUScriptMediaItemCollection *collection;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithCollection:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif