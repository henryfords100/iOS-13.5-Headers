/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EDServerMessagePersistenceFactory.h>

@class MFMailMessageLibrary;

@interface MFServerMessagePersistenceFactory_iOS : EDServerMessagePersistenceFactory {

	MFMailMessageLibrary* _library;

}

@property (assign,nonatomic,__weak) MFMailMessageLibrary * library;              //@synthesize library=_library - In the implementation block
-(MFMailMessageLibrary *)library;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(id)initWithLibrary:(id)arg1 database:(id)arg2 ;
-(long long)mailboxIDForMailboxURL:(id)arg1 useNumericSearch:(BOOL*)arg2 supportsLabels:(BOOL*)arg3 ;
@end

