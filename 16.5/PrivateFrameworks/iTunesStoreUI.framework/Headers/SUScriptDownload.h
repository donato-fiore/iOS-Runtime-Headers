// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTDOWNLOAD_H
#define SUSCRIPTDOWNLOAD_H

@class NSNumber, NSString;


#import "SUScriptObject.h"
#import "ISUDownload.h"

@interface SUScriptDownload : SUScriptObject {
    ISUDownload *_download;
}


@property (readonly) NSNumber *adamID;
@property (readonly) NSString *phase;
@property (readonly) float progress;


+(id)phaseStringForDownload:(id)arg0 ;
+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithISUDownload:(id)arg0 ;
-(id)initWithSSDownload:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif