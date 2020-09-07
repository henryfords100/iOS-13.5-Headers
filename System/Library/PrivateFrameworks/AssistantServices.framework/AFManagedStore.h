/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFManagedStore <NSObject>
@required
-(id)domainObjectForKey:(id)arg1;
-(void)setDomainObject:(id)arg1 forKey:(id)arg2;
-(id)dataForKey:(id)arg1 inKnowledgeStoreWithName:(id)arg2;
-(void)setData:(id)arg1 forKey:(id)arg2 inKnowledgeStoreWithName:(id)arg3;
-(void)resetKnowledgeStoreWithName:(id)arg1;

@end
