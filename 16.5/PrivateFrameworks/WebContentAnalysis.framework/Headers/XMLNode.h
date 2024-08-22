// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XMLNODE_H
#define XMLNODE_H


#import <Foundation/Foundation.h>


@interface XMLNode : NSObject {
    ? _xmlNode;
}




+(?)getJavascriptFromNode;
+(?)stringValueForAttributeinNode;
-(?)initWithNode;
-(?)setXmlNode;
-(NSInteger)_intValueFromAttribute:(id)arg0 ;
-(id)_stringValueFromAttribute:(id)arg0 ;
-(struct _xmlNode *)xmlNode;
-(void)dealloc;


@end


#endif