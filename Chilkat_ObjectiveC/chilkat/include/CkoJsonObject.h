// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.62

// Generic/internal class name =  JsonObject
// Wrapped Chilkat C++ class name =  CkJsonObject

@class CkoJsonArray;
@class CkoStringBuilder;


@interface CkoJsonObject : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

- (void)clearCppImplObj;

@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSString *DelimiterChar;
@property (nonatomic) BOOL EmitCompact;
@property (nonatomic) BOOL EmitCrLf;
@property (nonatomic, copy) NSNumber *I;
@property (nonatomic, copy) NSNumber *J;
@property (nonatomic, copy) NSNumber *K;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSNumber *Size;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AddArrayAt
- (BOOL)AddArrayAt: (NSNumber *)index 
	name: (NSString *)name;
// method: AddBoolAt
- (BOOL)AddBoolAt: (NSNumber *)index 
	name: (NSString *)name 
	value: (BOOL)value;
// method: AddIntAt
- (BOOL)AddIntAt: (NSNumber *)index 
	name: (NSString *)name 
	value: (NSNumber *)value;
// method: AddNullAt
- (BOOL)AddNullAt: (NSNumber *)index 
	name: (NSString *)name;
// method: AddNumberAt
- (BOOL)AddNumberAt: (NSNumber *)index 
	name: (NSString *)name 
	numericStr: (NSString *)numericStr;
// method: AddObjectAt
- (BOOL)AddObjectAt: (NSNumber *)index 
	name: (NSString *)name;
// method: AddStringAt
- (BOOL)AddStringAt: (NSNumber *)index 
	name: (NSString *)name 
	value: (NSString *)value;
// method: AppendArray
- (CkoJsonArray *)AppendArray: (NSString *)name;
// method: AppendBool
- (BOOL)AppendBool: (NSString *)name 
	value: (BOOL)value;
// method: AppendInt
- (BOOL)AppendInt: (NSString *)name 
	value: (NSNumber *)value;
// method: AppendObject
- (CkoJsonObject *)AppendObject: (NSString *)name;
// method: AppendString
- (BOOL)AppendString: (NSString *)name 
	value: (NSString *)value;
// method: ArrayAt
- (CkoJsonArray *)ArrayAt: (NSNumber *)index;
// method: ArrayOf
- (CkoJsonArray *)ArrayOf: (NSString *)jsonPath;
// method: BoolAt
- (BOOL)BoolAt: (NSNumber *)index;
// method: BoolOf
- (BOOL)BoolOf: (NSString *)jsonPath;
// method: Delete
- (BOOL)Delete: (NSString *)name;
// method: DeleteAt
- (BOOL)DeleteAt: (NSNumber *)index;
// method: Emit
- (NSString *)Emit;
// method: EmitSb
- (BOOL)EmitSb: (CkoStringBuilder *)sb;
// method: FirebaseApplyEvent
- (BOOL)FirebaseApplyEvent: (NSString *)name 
	data: (NSString *)data;
// method: FirebasePatch
- (BOOL)FirebasePatch: (NSString *)jsonPath 
	jsonData: (NSString *)jsonData;
// method: FirebasePut
- (BOOL)FirebasePut: (NSString *)jsonPath 
	value: (NSString *)value;
// method: GetDocRoot
- (CkoJsonObject *)GetDocRoot;
// method: HasMember
- (BOOL)HasMember: (NSString *)jsonPath;
// method: IndexOf
- (NSNumber *)IndexOf: (NSString *)name;
// method: IntAt
- (NSNumber *)IntAt: (NSNumber *)index;
// method: IntOf
- (NSNumber *)IntOf: (NSString *)jsonPath;
// method: IsNullAt
- (BOOL)IsNullAt: (NSNumber *)index;
// method: IsNullOf
- (BOOL)IsNullOf: (NSString *)jsonPath;
// method: Load
- (BOOL)Load: (NSString *)json;
// method: LoadFile
- (BOOL)LoadFile: (NSString *)path;
// method: LoadSb
- (BOOL)LoadSb: (CkoStringBuilder *)sb;
// method: NameAt
- (NSString *)NameAt: (NSNumber *)index;
// method: ObjectAt
- (CkoJsonObject *)ObjectAt: (NSNumber *)index;
// method: ObjectOf
- (CkoJsonObject *)ObjectOf: (NSString *)jsonPath;
// method: Rename
- (BOOL)Rename: (NSString *)oldName 
	newName: (NSString *)newName;
// method: RenameAt
- (BOOL)RenameAt: (NSNumber *)index 
	name: (NSString *)name;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetBoolAt
- (BOOL)SetBoolAt: (NSNumber *)index 
	value: (BOOL)value;
// method: SetBoolOf
- (BOOL)SetBoolOf: (NSString *)jsonPath 
	value: (BOOL)value;
// method: SetIntAt
- (BOOL)SetIntAt: (NSNumber *)index 
	value: (NSNumber *)value;
// method: SetIntOf
- (BOOL)SetIntOf: (NSString *)jsonPath 
	value: (NSNumber *)value;
// method: SetNullAt
- (BOOL)SetNullAt: (NSNumber *)index;
// method: SetNullOf
- (BOOL)SetNullOf: (NSString *)jsonPath;
// method: SetNumberAt
- (BOOL)SetNumberAt: (NSNumber *)index 
	value: (NSString *)value;
// method: SetNumberOf
- (BOOL)SetNumberOf: (NSString *)jsonPath 
	value: (NSString *)value;
// method: SetStringAt
- (BOOL)SetStringAt: (NSNumber *)index 
	value: (NSString *)value;
// method: SetStringOf
- (BOOL)SetStringOf: (NSString *)jsonPath 
	value: (NSString *)value;
// method: SizeOfArray
- (NSNumber *)SizeOfArray: (NSString *)jsonPath;
// method: StringAt
- (NSString *)StringAt: (NSNumber *)index;
// method: StringOf
- (NSString *)StringOf: (NSString *)jsonPath;
// method: TypeAt
- (NSNumber *)TypeAt: (NSNumber *)index;

@end
