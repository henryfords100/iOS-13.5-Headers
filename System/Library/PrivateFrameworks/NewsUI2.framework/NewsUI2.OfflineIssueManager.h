/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCOfflineIssueListObserving.h>

@interface NewsUI2.OfflineIssueManager : NSObject <FCNetworkReachabilityObserving, FCOfflineIssueListObserving> {

	 issueDownloadService;
	 offlineIssueList;
	 storageLevelProvider;
	 issueOfflineManager;
	 networkReachability;
	 cachedIssuesPromise;
	 downloads;
	 downloadsLock;
	 issueIDsAvailableOffline;

}
-(void)powerStateDidChange;
-(void)wifiReachabilityDidChange:(id)arg1 ;
-(void)offlineIssueList:(id)arg1 didAddIssues:(id)arg2 removeIssues:(id)arg3 ;
-(id)init;
@end

