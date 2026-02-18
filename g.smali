.class public Lc2/g;
.super Ljava/lang/Object;
.source "SourceFile"


# static fields
.field public static q:I = 0x5

.field public static r:I = 0xe

.field public static final s:[I

.field public static final t:[I

.field public static final u:[I

.field public static final v:[Lb2/d;

.field private static final w:Lb2/d;


# instance fields
.field public a:Lb2/i;

.field public b:Lb2/i;

.field public c:J

.field public d:Lb2/i;

.field public e:I

.field public f:I

.field public g:Lb2/d;

.field public h:Lb2/d;

.field public i:J

.field public j:Lb2/i;

.field private final k:Lb2/d;

.field public l:[Lb2/i;

.field public m:D

.field public n:I

.field private o:[J

.field private p:Lb2/i;


# direct methods
.method static constructor <clinit>()V
    .locals 141

    const/16 v9, 0x9

    new-array v10, v9, [I

    fill-array-data v10, :array_0

    sput-object v10, Lc2/g;->s:[I

    const/16 v16, 0x8

    new-array v2, v9, [I

    fill-array-data v2, :array_1

    sput-object v2, Lc2/g;->t:[I

    const/16 v17, 0x67

    const/16 v2, 0x85

    const/16 v18, 0x7f

    const/16 v19, 0x79

    new-array v12, v2, [I

    fill-array-data v12, :array_2

    sput-object v12, Lc2/g;->u:[I

    new-instance v12, Lb2/d;

    const-wide/16 v3, 0x180

    const-wide/16 v5, 0x1

    invoke-direct {v12, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    const-wide/16 v7, 0x17a

    invoke-direct {v3, v5, v6, v7, v8}, Lb2/d;-><init>(JJ)V

    new-instance v7, Lb2/d;

    const-wide/16 v0, 0x174

    invoke-direct {v7, v5, v6, v0, v1}, Lb2/d;-><init>(JJ)V

    new-instance v0, Lb2/d;

    const-wide/16 v13, 0x16e

    invoke-direct {v0, v5, v6, v13, v14}, Lb2/d;-><init>(JJ)V

    new-instance v13, Lb2/d;

    const-wide/16 v8, 0x168

    invoke-direct {v13, v5, v6, v8, v9}, Lb2/d;-><init>(JJ)V

    new-instance v8, Lb2/d;

    const-wide/16 v14, 0x162

    invoke-direct {v8, v5, v6, v14, v15}, Lb2/d;-><init>(JJ)V

    new-instance v14, Lb2/d;

    const-wide/16 v9, 0x15c

    invoke-direct {v14, v5, v6, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v9, Lb2/d;

    move-object/from16 v20, v12

    const-wide/16 v11, 0x156

    invoke-direct {v9, v5, v6, v11, v12}, Lb2/d;-><init>(JJ)V

    new-instance v11, Lb2/d;

    const-wide/16 v1, 0x150

    invoke-direct {v11, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v21, v11

    const-wide/16 v10, 0x14a

    invoke-direct {v1, v5, v6, v10, v11}, Lb2/d;-><init>(JJ)V

    new-instance v10, Lb2/d;

    move-object v11, v13

    const-wide/16 v12, 0x144

    invoke-direct {v10, v5, v6, v12, v13}, Lb2/d;-><init>(JJ)V

    new-instance v12, Lb2/d;

    move-object v13, v3

    const-wide/16 v2, 0x13e

    invoke-direct {v12, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    const-wide/16 v3, 0x138

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v22, v2

    const-wide/16 v1, 0x135

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v23, v3

    const-wide/16 v2, 0x132

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v24, v4

    const-wide/16 v3, 0x12f

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v25, v2

    const-wide/16 v1, 0x12c

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v26, v3

    const-wide/16 v2, 0x129

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v27, v4

    const-wide/16 v3, 0x126

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v28, v2

    const-wide/16 v1, 0x123

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v29, v3

    const-wide/16 v2, 0x120

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v30, v4

    const-wide/16 v3, 0x11d

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v31, v2

    const-wide/16 v1, 0x11a

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v32, v3

    const-wide/16 v2, 0x117

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v33, v4

    const-wide/16 v3, 0x114

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v34, v2

    const-wide/16 v1, 0x111

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v35, v3

    const-wide/16 v2, 0x10e

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v36, v4

    const-wide/16 v3, 0x10b

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v37, v2

    const-wide/16 v1, 0x108

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v38, v3

    const-wide/16 v2, 0x105

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v39, v4

    const-wide/16 v3, 0x102

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v40, v2

    const-wide/16 v1, 0xff

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v41, v3

    const-wide/16 v2, 0xfc

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v42, v4

    const-wide/16 v3, 0xf9

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v43, v2

    const-wide/16 v1, 0xf6

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v44, v3

    const-wide/16 v2, 0xf3

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v45, v4

    const-wide/16 v3, 0xf0

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v46, v2

    const-wide/16 v1, 0xed

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v47, v3

    const-wide/16 v2, 0xea

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v48, v4

    const-wide/16 v3, 0xe7

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v49, v2

    const-wide/16 v1, 0xe4

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v50, v3

    const-wide/16 v2, 0xe1

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v51, v4

    const-wide/16 v3, 0xde

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v52, v2

    const-wide/16 v1, 0xdb

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v53, v3

    const-wide/16 v2, 0xd8

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v54, v4

    const-wide/16 v3, 0xd5

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v55, v2

    const-wide/16 v1, 0xd2

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v56, v3

    const-wide/16 v2, 0xcf

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v57, v4

    const-wide/16 v3, 0xcc

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v58, v2

    const-wide/16 v1, 0xc9

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v59, v3

    const-wide/16 v2, 0xc6

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v60, v4

    const-wide/16 v3, 0xc3

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v61, v2

    const-wide/16 v1, 0xc0

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v62, v3

    const-wide/16 v2, 0xbd

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v63, v4

    const-wide/16 v3, 0xba

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v64, v2

    const-wide/16 v1, 0xb7

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v65, v3

    const-wide/16 v2, 0xb4

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v66, v4

    const-wide/16 v3, 0xb1

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v67, v2

    const-wide/16 v1, 0xae

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v68, v3

    const-wide/16 v2, 0xab

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v69, v4

    const-wide/16 v3, 0xa8

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v70, v2

    const-wide/16 v1, 0xa5

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v71, v3

    const-wide/16 v2, 0xa2

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v72, v4

    const-wide/16 v3, 0x9f

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v73, v2

    const-wide/16 v1, 0x9c

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v74, v3

    const-wide/16 v2, 0x99

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v75, v4

    const-wide/16 v3, 0x96

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v76, v2

    const-wide/16 v1, 0x93

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v77, v3

    const-wide/16 v2, 0x90

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v78, v4

    const-wide/16 v3, 0x8d

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v79, v2

    const-wide/16 v1, 0x8a

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v80, v3

    const-wide/16 v2, 0x87

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v81, v4

    const-wide/16 v3, 0x84

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v82, v2

    const-wide/16 v1, 0x81

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v83, v3

    const-wide/16 v2, 0x7e

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v84, v4

    const-wide/16 v3, 0x7b

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v85, v2

    const-wide/16 v1, 0x78

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v86, v3

    const-wide/16 v2, 0x75

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v87, v4

    const-wide/16 v3, 0x72

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v88, v2

    const-wide/16 v1, 0x6f

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v89, v3

    const-wide/16 v2, 0x6c

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v90, v4

    const-wide/16 v3, 0x69

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v91, v2

    const-wide/16 v1, 0x66

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v92, v3

    const-wide/16 v2, 0x63

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v93, v4

    const-wide/16 v3, 0x60

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v94, v2

    const-wide/16 v1, 0x5d

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v95, v3

    const-wide/16 v2, 0x5a

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v96, v4

    const-wide/16 v3, 0x57

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v97, v2

    const-wide/16 v1, 0x54

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v98, v3

    const-wide/16 v2, 0x51

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v99, v4

    const-wide/16 v3, 0x4e

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v100, v2

    const-wide/16 v1, 0x4b

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v101, v3

    const-wide/16 v2, 0x48

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v102, v4

    const-wide/16 v3, 0x45

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v103, v2

    const-wide/16 v1, 0x42

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v104, v3

    const-wide/16 v2, 0x3f

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v105, v4

    const-wide/16 v3, 0x3c

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v106, v2

    const-wide/16 v1, 0x39

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v107, v3

    const-wide/16 v2, 0x36

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v108, v4

    const-wide/16 v3, 0x33

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v109, v2

    const-wide/16 v1, 0x30

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v110, v3

    const-wide/16 v2, 0x2d

    invoke-direct {v1, v5, v6, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v111, v4

    const-wide/16 v3, 0x2a

    invoke-direct {v2, v5, v6, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v112, v2

    const-wide/16 v1, 0x27

    invoke-direct {v3, v5, v6, v1, v2}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    const-wide/16 v5, 0x24

    move-object/from16 v113, v3

    const-wide/16 v2, 0x4

    invoke-direct {v1, v2, v3, v5, v6}, Lb2/d;-><init>(JJ)V

    new-instance v5, Lb2/d;

    const-wide/16 v2, 0x21

    move-object v6, v9

    move-object/from16 v114, v10

    const-wide/16 v9, 0x20

    invoke-direct {v5, v9, v10, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    const-wide/16 v9, 0x100

    move-object/from16 v116, v4

    const-wide/16 v3, 0x1e

    invoke-direct {v2, v9, v10, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v15, Lb2/d;

    const-wide/16 v9, 0x2

    invoke-direct {v15, v9, v10, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    const-wide/16 v9, 0x40

    move-object/from16 v118, v5

    const-wide/16 v4, 0x1b

    invoke-direct {v3, v9, v10, v4, v5}, Lb2/d;-><init>(JJ)V

    new-instance v9, Lb2/d;

    move-object v10, v2

    move-object/from16 v121, v3

    const-wide/16 v2, 0x4

    invoke-direct {v9, v2, v3, v4, v5}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    const-wide/16 v3, 0x18

    move-object v5, v9

    move-object/from16 v122, v10

    const-wide/16 v9, 0x100

    invoke-direct {v2, v9, v10, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v9, Lb2/d;

    move-object v10, v1

    move-object/from16 v123, v2

    const-wide/16 v1, 0x10

    invoke-direct {v9, v1, v2, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object v2, v9

    move-object/from16 v126, v10

    const-wide/16 v9, 0x1

    invoke-direct {v1, v9, v10, v3, v4}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    const-wide/16 v9, 0x15

    move-object v4, v1

    move-object/from16 v127, v2

    const-wide/16 v1, 0x40

    invoke-direct {v3, v1, v2, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v128, v3

    const-wide/16 v2, 0x4

    invoke-direct {v1, v2, v3, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    const-wide/16 v9, 0x12

    move-object/from16 v129, v4

    const-wide/16 v3, 0x100

    invoke-direct {v2, v3, v4, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v130, v2

    const-wide/16 v1, 0x10

    invoke-direct {v3, v1, v2, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v131, v3

    const-wide/16 v2, 0x1

    invoke-direct {v1, v2, v3, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    const-wide/16 v9, 0xf

    move-object/from16 v132, v4

    const-wide/16 v3, 0x40

    invoke-direct {v2, v3, v4, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v133, v2

    const-wide/16 v1, 0x4

    invoke-direct {v3, v1, v2, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    const-wide/16 v9, 0xc

    move-object/from16 v134, v3

    const-wide/16 v2, 0x100

    invoke-direct {v1, v2, v3, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v135, v4

    const-wide/16 v3, 0x10

    invoke-direct {v2, v3, v4, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    move-object v4, v1

    move-object/from16 v136, v2

    const-wide/16 v1, 0x1

    invoke-direct {v3, v1, v2, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    const-wide/16 v9, 0x9

    move-object/from16 v137, v3

    const-wide/16 v2, 0x40

    invoke-direct {v1, v2, v3, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v138, v4

    const-wide/16 v3, 0x4

    invoke-direct {v2, v3, v4, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    const-wide/16 v9, 0x6

    move-object v4, v1

    move-object/from16 v139, v2

    const-wide/16 v1, 0x100

    invoke-direct {v3, v1, v2, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    move-object/from16 v140, v3

    const-wide/16 v2, 0x10

    invoke-direct {v1, v2, v3, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v2, Lb2/d;

    move-object/from16 v124, v4

    const-wide/16 v3, 0x1

    invoke-direct {v2, v3, v4, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v3, Lb2/d;

    const-wide/16 v9, 0x3

    move-object v4, v1

    move-object/from16 v125, v2

    const-wide/16 v1, 0x40

    invoke-direct {v3, v1, v2, v9, v10}, Lb2/d;-><init>(JJ)V

    new-instance v1, Lb2/d;

    const-wide/16 v9, 0x1000

    move-object/from16 v119, v3

    const-wide/16 v2, 0x0

    invoke-direct {v1, v9, v10, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v9, Lb2/d;

    move-object/from16 v120, v4

    move-object v10, v5

    const-wide/16 v4, 0x100

    invoke-direct {v9, v4, v5, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v4, Lb2/d;

    move-object v5, v9

    move-object/from16 v117, v10

    const-wide/16 v9, 0x20

    invoke-direct {v4, v9, v10, v2, v3}, Lb2/d;-><init>(JJ)V

    new-instance v9, Lb2/d;

    move-object v10, v4

    move-object/from16 v115, v5

    const-wide/16 v4, 0x4

    invoke-direct {v9, v4, v5, v2, v3}, Lb2/d;-><init>(JJ)V

    const/16 v2, 0x85

    new-array v2, v2, [Lb2/d;

    const/4 v3, 0x0

    aput-object v20, v2, v3

    const/4 v3, 0x1

    aput-object v13, v2, v3

    const/4 v3, 0x2

    aput-object v7, v2, v3

    const/4 v3, 0x3

    aput-object v0, v2, v3

    const/4 v0, 0x4

    aput-object v11, v2, v0

    const/4 v0, 0x5

    aput-object v8, v2, v0

    const/4 v0, 0x6

    aput-object v14, v2, v0

    const/4 v0, 0x7

    aput-object v6, v2, v0

    aput-object v21, v2, v16

    const/16 v0, 0x9

    aput-object v24, v2, v0

    const/16 v0, 0xa

    aput-object v114, v2, v0

    const/16 v0, 0xb

    aput-object v12, v2, v0

    const/16 v0, 0xc

    aput-object v22, v2, v0

    const/16 v0, 0xd

    aput-object v23, v2, v0

    const/16 v0, 0xe

    aput-object v27, v2, v0

    const/16 v0, 0xf

    aput-object v25, v2, v0

    const/16 v0, 0x10

    aput-object v26, v2, v0

    const/16 v0, 0x11

    aput-object v30, v2, v0

    const/16 v0, 0x12

    aput-object v28, v2, v0

    const/16 v0, 0x13

    aput-object v29, v2, v0

    const/16 v0, 0x14

    aput-object v33, v2, v0

    const/16 v0, 0x15

    aput-object v31, v2, v0

    const/16 v0, 0x16

    aput-object v32, v2, v0

    const/16 v0, 0x17

    aput-object v36, v2, v0

    const/16 v0, 0x18

    aput-object v34, v2, v0

    const/16 v0, 0x19

    aput-object v35, v2, v0

    const/16 v0, 0x1a

    aput-object v39, v2, v0

    const/16 v0, 0x1b

    aput-object v37, v2, v0

    const/16 v0, 0x1c

    aput-object v38, v2, v0

    const/16 v0, 0x1d

    aput-object v42, v2, v0

    const/16 v0, 0x1e

    aput-object v40, v2, v0

    const/16 v0, 0x1f

    aput-object v41, v2, v0

    const/16 v0, 0x20

    aput-object v45, v2, v0

    const/16 v0, 0x21

    aput-object v43, v2, v0

    const/16 v0, 0x22

    aput-object v44, v2, v0

    const/16 v0, 0x23

    aput-object v48, v2, v0

    const/16 v0, 0x24

    aput-object v46, v2, v0

    const/16 v0, 0x25

    aput-object v47, v2, v0

    const/16 v0, 0x26

    aput-object v51, v2, v0

    const/16 v0, 0x27

    aput-object v49, v2, v0

    const/16 v0, 0x28

    aput-object v50, v2, v0

    const/16 v0, 0x29

    aput-object v54, v2, v0

    const/16 v0, 0x2a

    aput-object v52, v2, v0

    const/16 v0, 0x2b

    aput-object v53, v2, v0

    const/16 v0, 0x2c

    aput-object v57, v2, v0

    const/16 v0, 0x2d

    aput-object v55, v2, v0

    const/16 v0, 0x2e

    aput-object v56, v2, v0

    const/16 v0, 0x2f

    aput-object v60, v2, v0

    const/16 v0, 0x30

    aput-object v58, v2, v0

    const/16 v0, 0x31

    aput-object v59, v2, v0

    const/16 v0, 0x32

    aput-object v63, v2, v0

    const/16 v0, 0x33

    aput-object v61, v2, v0

    const/16 v0, 0x34

    aput-object v62, v2, v0

    const/16 v0, 0x35

    aput-object v66, v2, v0

    const/16 v0, 0x36

    aput-object v64, v2, v0

    const/16 v0, 0x37

    aput-object v65, v2, v0

    const/16 v0, 0x38

    aput-object v69, v2, v0

    const/16 v0, 0x39

    aput-object v67, v2, v0

    const/16 v0, 0x3a

    aput-object v68, v2, v0

    const/16 v0, 0x3b

    aput-object v72, v2, v0

    const/16 v0, 0x3c

    aput-object v70, v2, v0

    const/16 v0, 0x3d

    aput-object v71, v2, v0

    const/16 v0, 0x3e

    aput-object v75, v2, v0

    const/16 v0, 0x3f

    aput-object v73, v2, v0

    const/16 v0, 0x40

    aput-object v74, v2, v0

    const/16 v0, 0x41

    aput-object v78, v2, v0

    const/16 v0, 0x42

    aput-object v76, v2, v0

    const/16 v0, 0x43

    aput-object v77, v2, v0

    const/16 v0, 0x44

    aput-object v81, v2, v0

    const/16 v0, 0x45

    aput-object v79, v2, v0

    const/16 v0, 0x46

    aput-object v80, v2, v0

    const/16 v0, 0x47

    aput-object v84, v2, v0

    const/16 v0, 0x48

    aput-object v82, v2, v0

    const/16 v0, 0x49

    aput-object v83, v2, v0

    const/16 v0, 0x4a

    aput-object v87, v2, v0

    const/16 v0, 0x4b

    aput-object v85, v2, v0

    const/16 v0, 0x4c

    aput-object v86, v2, v0

    const/16 v0, 0x4d

    aput-object v90, v2, v0

    const/16 v0, 0x4e

    aput-object v88, v2, v0

    const/16 v0, 0x4f

    aput-object v89, v2, v0

    const/16 v0, 0x50

    aput-object v93, v2, v0

    const/16 v0, 0x51

    aput-object v91, v2, v0

    const/16 v0, 0x52

    aput-object v92, v2, v0

    const/16 v0, 0x53

    aput-object v96, v2, v0

    const/16 v0, 0x54

    aput-object v94, v2, v0

    const/16 v0, 0x55

    aput-object v95, v2, v0

    const/16 v0, 0x56

    aput-object v99, v2, v0

    const/16 v0, 0x57

    aput-object v97, v2, v0

    const/16 v0, 0x58

    aput-object v98, v2, v0

    const/16 v0, 0x59

    aput-object v102, v2, v0

    const/16 v0, 0x5a

    aput-object v100, v2, v0

    const/16 v0, 0x5b

    aput-object v101, v2, v0

    const/16 v0, 0x5c

    aput-object v105, v2, v0

    const/16 v0, 0x5d

    aput-object v103, v2, v0

    const/16 v0, 0x5e

    aput-object v104, v2, v0

    const/16 v0, 0x5f

    aput-object v108, v2, v0

    const/16 v0, 0x60

    aput-object v106, v2, v0

    const/16 v0, 0x61

    aput-object v107, v2, v0

    const/16 v0, 0x62

    aput-object v111, v2, v0

    const/16 v0, 0x63

    aput-object v109, v2, v0

    const/16 v0, 0x64

    aput-object v110, v2, v0

    const/16 v0, 0x65

    aput-object v116, v2, v0

    const/16 v0, 0x66

    aput-object v112, v2, v0

    aput-object v113, v2, v17

    const/16 v0, 0x68

    aput-object v126, v2, v0

    const/16 v0, 0x69

    aput-object v118, v2, v0

    const/16 v0, 0x6a

    aput-object v122, v2, v0

    const/16 v0, 0x6b

    aput-object v15, v2, v0

    const/16 v0, 0x6c

    aput-object v121, v2, v0

    const/16 v0, 0x6d

    aput-object v117, v2, v0

    const/16 v0, 0x6e

    aput-object v123, v2, v0

    const/16 v0, 0x6f

    aput-object v127, v2, v0

    const/16 v0, 0x70

    aput-object v129, v2, v0

    const/16 v0, 0x71

    aput-object v128, v2, v0

    const/16 v0, 0x72

    aput-object v132, v2, v0

    const/16 v0, 0x73

    aput-object v130, v2, v0

    const/16 v0, 0x74

    aput-object v131, v2, v0

    const/16 v0, 0x75

    aput-object v135, v2, v0

    const/16 v0, 0x76

    aput-object v133, v2, v0

    const/16 v0, 0x77

    aput-object v134, v2, v0

    const/16 v0, 0x78

    aput-object v138, v2, v0

    aput-object v136, v2, v19

    const/16 v0, 0x7a

    aput-object v137, v2, v0

    const/16 v0, 0x7b

    aput-object v124, v2, v0

    const/16 v0, 0x7c

    aput-object v139, v2, v0

    const/16 v0, 0x7d

    aput-object v140, v2, v0

    const/16 v0, 0x7e

    aput-object v120, v2, v0

    aput-object v125, v2, v18

    const/16 v0, 0x80

    aput-object v119, v2, v0

    const/16 v0, 0x81

    aput-object v1, v2, v0

    const/16 v0, 0x82

    aput-object v115, v2, v0

    const/16 v0, 0x83

    aput-object v10, v2, v0

    const/16 v0, 0x84

    aput-object v9, v2, v0

    sput-object v2, Lc2/g;->v:[Lb2/d;

    new-instance v0, Lb2/d;

    const-wide/16 v1, 0x1

    invoke-direct {v0, v1, v2}, Lb2/d;-><init>(J)V

    sput-object v0, Lc2/g;->w:Lb2/d;

    return-void

    nop

    :array_0
    .array-data 4
        0x61
        0x5b
        0x55
        0x4f
        0x49
        0x43
        0x3d
        0x37
        0x31
    .end array-data

    :array_1
    .array-data 4
        0x400
        0x140
        0x60
        0x30
        0x10
        0xc
        0x8
        0x4
        0x2
    .end array-data

    :array_2
    .array-data 4
        0x37f
        0x379
        0x373
        0x36d
        0x367
        0x361
        0x35b
        0x355
        0x34f
        0x349
        0x343
        0x33d
        0x337
        0x331
        0x32b
        0x325
        0x31f
        0x319
        0x313
        0x30d
        0x307
        0x301
        0x2fb
        0x2f5
        0x2ef
        0x2e9
        0x2e3
        0x2dd
        0x2d7
        0x2d1
        0x2cb
        0x2c5
        0x2bf
        0x2b9
        0x2b3
        0x2ad
        0x2a7
        0x2a1
        0x29b
        0x295
        0x28f
        0x289
        0x283
        0x27d
        0x277
        0x271
        0x26b
        0x265
        0x25f
        0x259
        0x253
        0x24d
        0x247
        0x241
        0x23b
        0x235
        0x22f
        0x229
        0x223
        0x21d
        0x217
        0x211
        0x20b
        0x205
        0x1ff
        0x1f9
        0x1f3
        0x1ed
        0x1e7
        0x1e1
        0x1db
        0x1d5
        0x1cf
        0x1c9
        0x1c3
        0x1bd
        0x1b7
        0x1b1
        0x1ab
        0x1a5
        0x19f
        0x199
        0x193
        0x18d
        0x187
        0x181
        0x17b
        0x175
        0x16f
        0x169
        0x163
        0x15d
        0x157
        0x151
        0x14b
        0x145
        0x13f
        0x139
        0x133
        0x12d
        0x127
        0x121
        0x11b
        0x115
        0x10f
        0x109
        0x103
        0xfd
        0xf7
        0xf1
        0xeb
        0xe5
        0xdf
        0xd9
        0xd3
        0xcd
        0xc7
        0xc1
        0xbb
        0xb5
        0xaf
        0xa9
        0xa3
        0x9d
        0x97
        0x91
        0x8b
        0x85
        0x7f
        0x79
        0x73
        0x6d
        0x67
    .end array-data
.end method

.method public constructor <init>()V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lb2/i;

    invoke-direct {v0}, Lb2/i;-><init>()V

    iput-object v0, p0, Lc2/g;->a:Lb2/i;

    new-instance v0, Lb2/i;

    invoke-direct {v0}, Lb2/i;-><init>()V

    iput-object v0, p0, Lc2/g;->b:Lb2/i;

    const-wide/16 v0, -0x2af8

    iput-wide v0, p0, Lc2/g;->c:J

    new-instance v0, Lb2/i;

    invoke-direct {v0}, Lb2/i;-><init>()V

    iput-object v0, p0, Lc2/g;->d:Lb2/i;

    const/4 v0, 0x0

    iput v0, p0, Lc2/g;->e:I

    iput v0, p0, Lc2/g;->f:I

    const-wide/32 v1, 0x989680

    iput-wide v1, p0, Lc2/g;->i:J

    new-instance v1, Lb2/i;

    invoke-direct {v1}, Lb2/i;-><init>()V

    iput-object v1, p0, Lc2/g;->j:Lb2/i;

    new-instance v1, Lb2/d;

    invoke-direct {v1}, Lb2/d;-><init>()V

    iput-object v1, p0, Lc2/g;->k:Lb2/d;

    const/16 v1, 0xa

    new-array v1, v1, [Lb2/i;

    iput-object v1, p0, Lc2/g;->l:[Lb2/i;

    const-wide/16 v1, 0x0

    iput-wide v1, p0, Lc2/g;->m:D

    const v1, 0x3d0900

    iput v1, p0, Lc2/g;->n:I

    const/16 v1, 0xd

    new-array v1, v1, [J

    fill-array-data v1, :array_0

    iput-object v1, p0, Lc2/g;->o:[J

    new-instance v1, Lb2/i;

    invoke-direct {v1}, Lb2/i;-><init>()V

    iput-object v1, p0, Lc2/g;->p:Lb2/i;

    new-instance v1, Lb2/d;

    invoke-direct {v1}, Lb2/d;-><init>()V

    iput-object v1, p0, Lc2/g;->g:Lb2/d;

    new-instance v1, Lb2/d;

    const-wide/16 v2, 0x2

    invoke-direct {v1, v2, v3}, Lb2/d;-><init>(J)V

    iput-object v1, p0, Lc2/g;->h:Lb2/d;

    iget v2, p0, Lc2/g;->f:I

    int-to-long v2, v2

    invoke-virtual {v1, v2, v3}, Lb2/d;->t(J)V

    iget-object v1, p0, Lc2/g;->h:Lb2/d;

    iget-wide v2, p0, Lc2/g;->i:J

    invoke-virtual {v1, v2, v3}, Lb2/d;->r(J)V

    :goto_0
    iget-object v1, p0, Lc2/g;->l:[Lb2/i;

    array-length v2, v1

    if-ge v0, v2, :cond_0

    new-instance v2, Lb2/i;

    invoke-direct {v2}, Lb2/i;-><init>()V

    aput-object v2, v1, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void

    :array_0
    .array-data 8
        0x3e8
        0x7d0
        0xbb8
        0x1388
        0x61a8
        0x124f8
        0x30d40
        0x7a120
        0xf4240
        0x1e8480
        0x4c4b40
        0x1312d00
        0x5f5e100
    .end array-data
.end method

.method private k()I
    .locals 2

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v0}, Lc2/k;->s()J

    move-result-wide v0

    long-to-int v1, v0

    mul-int/lit8 v1, v1, 0x5

    add-int/lit8 v1, v1, 0x64

    return v1
.end method

.method private m()J
    .locals 4

    sget-object v0, LW1/b;->v:Lc2/d;

    const/16 v1, 0x68

    invoke-virtual {v0, v1}, Lc2/d;->e(I)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lc2/g;->d:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    iget-object v2, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v2

    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    return-wide v0

    :cond_0
    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    return-wide v0
.end method

.method private q()J
    .locals 2

    sget-object v0, LW1/b;->v:Lc2/d;

    const/16 v1, 0x68

    invoke-virtual {v0, v1}, Lc2/d;->e(I)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lc2/g;->t:[I

    const/4 v1, 0x0

    aget v0, v0, v1

    :goto_0
    int-to-long v0, v0

    return-wide v0

    :cond_0
    invoke-virtual {p0}, Lc2/g;->p()I

    move-result v0

    goto :goto_0
.end method


# virtual methods
.method public A()Z
    .locals 5

    iget-object v0, p0, Lc2/g;->a:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    invoke-virtual {p0}, Lc2/g;->s()J

    move-result-wide v2

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public B()Z
    .locals 5

    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public C()V
    .locals 9

    new-instance v0, Lb2/d;

    const-wide/16 v1, 0x2

    invoke-direct {v0, v1, v2}, Lb2/d;-><init>(J)V

    iput-object v0, p0, Lc2/g;->h:Lb2/d;

    iget v1, p0, Lc2/g;->f:I

    int-to-long v1, v1

    invoke-virtual {v0, v1, v2}, Lb2/d;->t(J)V

    iget-object v0, p0, Lc2/g;->h:Lb2/d;

    iget-wide v1, p0, Lc2/g;->i:J

    const-wide/16 v3, 0x64

    mul-long v1, v1, v3

    sget-object v5, LW1/b;->s:Lc2/c;

    iget-object v5, v5, Lc2/c;->a:Lc2/k;

    invoke-virtual {v5}, Lc2/k;->s()J

    move-result-wide v5

    const-wide/16 v7, 0x5

    mul-long v5, v5, v7

    add-long/2addr v5, v3

    div-long/2addr v1, v5

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    return-void
.end method

.method public D()V
    .locals 9

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    array-length v1, v0

    const-wide/32 v2, 0xf4240

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v1, :cond_1

    aget-object v5, v0, v4

    invoke-virtual {v5}, Lb2/i;->d()J

    move-result-wide v6

    cmp-long v8, v6, v2

    if-gez v8, :cond_0

    invoke-virtual {v5}, Lb2/i;->d()J

    move-result-wide v2

    :cond_0
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_1
    const-wide/16 v0, 0x0

    cmp-long v4, v2, v0

    if-lez v4, :cond_2

    iget-object v0, p0, Lc2/g;->p:Lb2/i;

    const-wide/16 v4, 0xa

    add-long/2addr v2, v4

    invoke-virtual {v0, v2, v3}, Lb2/i;->c(J)V

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lc2/g;->p:Lb2/i;

    iget-object v1, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lb2/i;->c(J)V

    :goto_1
    return-void
.end method

.method public E()V
    .locals 5

    invoke-virtual {p0}, Lc2/g;->e()V

    iget-object v0, p0, Lc2/g;->a:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    iget-object v0, p0, Lc2/g;->j:Lb2/i;

    const-wide/16 v1, 0x1

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    invoke-virtual {p0}, Lc2/g;->D()V

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->Y:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->e0:Lb2/i;

    invoke-virtual {v0, v1, v2}, Lb2/i;->c(J)V

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->f0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    iget-object v0, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v3

    cmp-long v0, v3, v1

    if-nez v0, :cond_0

    sget-object v0, LW1/b;->w:Lr2/c;

    iget-object v0, v0, Lr2/c;->d:Lr2/d;

    invoke-virtual {v0}, Lr2/d;->a()V

    :cond_0
    return-void
.end method

.method public F()Ljava/lang/String;
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lc2/g;->a:Lb2/i;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ";"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->g:Lb2/d;

    invoke-virtual {v0}, Lb2/d;->v()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lc2/g;->f:I

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lc2/g;->e:I

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v3, p0, Lc2/g;->c:J

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    const/4 v3, 0x0

    aget-object v0, v0, v3

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    const/4 v3, 0x1

    aget-object v0, v0, v3

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    const/4 v3, 0x2

    aget-object v0, v0, v3

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    const/4 v3, 0x3

    aget-object v0, v0, v3

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    const/4 v3, 0x4

    aget-object v0, v0, v3

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    const/4 v3, 0x5

    aget-object v0, v0, v3

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    const/4 v3, 0x6

    aget-object v0, v0, v3

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    const/4 v3, 0x7

    aget-object v0, v0, v3

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    const/16 v3, 0x8

    aget-object v0, v0, v3

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    const/16 v3, 0x9

    aget-object v0, v0, v3

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v3, p0, Lc2/g;->m:D

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    const-string v3, "E"

    const-string v4, "e"

    invoke-virtual {v0, v3, v4}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->d:Lb2/i;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "#"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, LW1/a;->h()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public G()Z
    .locals 8

    iget-object v0, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0xa

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    iget-object v0, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v0, v2, v3}, Lb2/i;->c(J)V

    :cond_0
    iget-object v0, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const/4 v4, 0x0

    cmp-long v5, v0, v2

    if-gez v5, :cond_1

    return v4

    :cond_1
    iget-object v0, p0, Lc2/g;->a:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    iget v2, p0, Lc2/g;->n:I

    int-to-long v2, v2

    const/4 v5, 0x1

    cmp-long v6, v0, v2

    if-ltz v6, :cond_2

    return v5

    :cond_2
    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0xa

    if-ge v0, v1, :cond_4

    iget-object v1, p0, Lc2/g;->l:[Lb2/i;

    aget-object v1, v1, v0

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    const-wide/16 v6, 0x0

    cmp-long v3, v1, v6

    if-lez v3, :cond_3

    return v5

    :cond_3
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_4
    return v4
.end method

.method public H()Z
    .locals 5

    iget-object v0, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-gtz v4, :cond_1

    iget-object v0, p0, Lc2/g;->a:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x64

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method public I()Z
    .locals 5

    iget-object v0, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x8

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public a(J)V
    .locals 5

    iget-object v0, p0, Lc2/g;->a:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide v2, 0x4563918244f40000L

    cmp-long v4, v0, v2

    if-gez v4, :cond_0

    iget-object v0, p0, Lc2/g;->a:Lb2/i;

    invoke-virtual {v0, p1, p2}, Lb2/i;->a(J)V

    :cond_0
    invoke-static {}, Ld2/b;->e()V

    return-void
.end method

.method public b()V
    .locals 6

    invoke-direct {p0}, Lc2/g;->m()J

    move-result-wide v0

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->j:Lf2/u;

    iget-object v2, v2, Lf2/u;->C:Lq2/p;

    invoke-virtual {v2}, Lq2/p;->f()I

    move-result v2

    int-to-long v2, v2

    mul-long v0, v0, v2

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v2}, Lh2/b;->G()I

    move-result v2

    add-int/lit8 v2, v2, 0x64

    int-to-long v2, v2

    mul-long v0, v0, v2

    const-wide/16 v2, 0x64

    div-long/2addr v0, v2

    sget-object v4, LW1/b;->t:Lf2/i;

    iget-object v4, v4, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v4}, Lh2/a;->z()I

    move-result v4

    add-int/lit8 v4, v4, 0x64

    int-to-long v4, v4

    mul-long v0, v0, v4

    div-long/2addr v0, v2

    invoke-static {}, Lk2/h;->e()J

    move-result-wide v4

    add-long/2addr v4, v2

    mul-long v0, v0, v4

    div-long/2addr v0, v2

    invoke-static {}, Le2/b;->l()I

    move-result v4

    add-int/lit8 v4, v4, 0x64

    int-to-long v4, v4

    mul-long v0, v0, v4

    div-long/2addr v0, v2

    invoke-static {}, Lm2/a;->g()I

    move-result v4

    add-int/lit8 v4, v4, 0x64

    int-to-long v4, v4

    mul-long v0, v0, v4

    div-long/2addr v0, v2

    invoke-virtual {p0, v0, v1}, Lc2/g;->a(J)V

    return-void
.end method

.method public c(Lb2/d;)V
    .locals 2

    iget-object v0, p0, Lc2/g;->g:Lb2/d;

    invoke-virtual {v0, p1}, Lb2/d;->b(Lb2/d;)V

    :cond_0
    :goto_0
    iget-object p1, p0, Lc2/g;->g:Lb2/d;

    iget-object v0, p0, Lc2/g;->h:Lb2/d;

    invoke-virtual {p1, v0}, Lb2/d;->C(Lb2/d;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lc2/g;->b:Lb2/i;

    const-wide/16 v0, 0x1

    invoke-virtual {p1, v0, v1}, Lb2/i;->a(J)V

    iget p1, p0, Lc2/g;->e:I

    add-int/lit8 p1, p1, 0xa

    iput p1, p0, Lc2/g;->e:I

    invoke-direct {p0}, Lc2/g;->k()I

    move-result v0

    if-lt p1, v0, :cond_0

    iget p1, p0, Lc2/g;->e:I

    invoke-direct {p0}, Lc2/g;->k()I

    move-result v0

    sub-int/2addr p1, v0

    iput p1, p0, Lc2/g;->e:I

    iget p1, p0, Lc2/g;->f:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lc2/g;->f:I

    invoke-virtual {p0}, Lc2/g;->C()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public d(Ljava/lang/String;)V
    .locals 2

    const-string v0, ";"

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/4 v0, 0x1

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    iget-object v0, p0, Lc2/g;->g:Lb2/d;

    const/4 v1, 0x2

    aget-object v1, p1, v1

    invoke-virtual {v0, v1}, Lb2/d;->c(Ljava/lang/String;)V

    const/4 v0, 0x3

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/4 v0, 0x4

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/4 v0, 0x5

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/4 v0, 0x6

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/4 v0, 0x7

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/16 v0, 0x8

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/16 v0, 0x9

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/16 v0, 0xa

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/16 v0, 0xb

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/16 v0, 0xc

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/16 v0, 0xd

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/16 v0, 0xe

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/16 v0, 0xf

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/16 v0, 0x10

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/16 v0, 0x11

    aget-object p1, p1, v0

    invoke-static {p1}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    return-void
.end method

.method public e()V
    .locals 8

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->j:Lb2/d;

    invoke-virtual {v0}, Lb2/d;->u()V

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v0}, Lc2/k;->d()V

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->b:Lc2/j;

    invoke-virtual {v0}, Lc2/j;->c()V

    sget-object v0, LW1/b;->s:Lc2/c;

    const/16 v1, 0x28

    invoke-virtual {v0, v1}, Lc2/c;->j0(I)V

    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/32 v2, 0x493e0

    const-wide/16 v4, 0x0

    cmp-long v6, v0, v2

    if-lez v6, :cond_0

    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0, v4, v5}, Lb2/i;->c(J)V

    :cond_0
    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/32 v2, 0x927c0

    cmp-long v6, v0, v2

    if-lez v6, :cond_1

    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0, v4, v5}, Lb2/i;->c(J)V

    iget-object v0, p0, Lc2/g;->a:Lb2/i;

    invoke-virtual {v0, v4, v5}, Lb2/i;->c(J)V

    :cond_1
    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    invoke-virtual {p0}, Lc2/g;->p()I

    move-result v2

    int-to-long v2, v2

    mul-long v0, v0, v2

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->j:Lf2/u;

    iget-object v2, v2, Lf2/u;->C:Lq2/p;

    invoke-virtual {v2}, Lq2/p;->f()I

    move-result v2

    int-to-long v2, v2

    mul-long v0, v0, v2

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v2}, Lh2/b;->G()I

    move-result v2

    add-int/lit8 v2, v2, 0x64

    int-to-long v2, v2

    mul-long v0, v0, v2

    const-wide/16 v2, 0x64

    div-long/2addr v0, v2

    sget-object v6, LW1/b;->t:Lf2/i;

    iget-object v6, v6, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v6}, Lh2/a;->z()I

    move-result v6

    add-int/lit8 v6, v6, 0x64

    int-to-long v6, v6

    mul-long v0, v0, v6

    div-long/2addr v0, v2

    invoke-static {}, Lk2/h;->e()J

    move-result-wide v6

    add-long/2addr v6, v2

    mul-long v0, v0, v6

    div-long/2addr v0, v2

    invoke-static {}, Le2/b;->l()I

    move-result v6

    add-int/lit8 v6, v6, 0x64

    int-to-long v6, v6

    mul-long v0, v0, v6

    div-long/2addr v0, v2

    invoke-static {}, Lm2/a;->g()I

    move-result v6

    add-int/lit8 v6, v6, 0x64

    int-to-long v6, v6

    mul-long v0, v0, v6

    div-long/2addr v0, v2

    invoke-virtual {p0, v0, v1}, Lc2/g;->a(J)V

    sget-object v0, LW1/b;->v:Lc2/d;

    const/16 v1, 0x68

    invoke-virtual {v0, v1}, Lc2/d;->e(I)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    iget-object v2, p0, Lc2/g;->d:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v2

    cmp-long v6, v0, v2

    if-lez v6, :cond_2

    iget-object v0, p0, Lc2/g;->d:Lb2/i;

    iget-object v1, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lb2/i;->c(J)V

    :cond_2
    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    const/4 v0, 0x0

    iput v0, p0, Lc2/g;->f:I

    iput v0, p0, Lc2/g;->e:I

    iget-object v0, p0, Lc2/g;->g:Lb2/d;

    invoke-virtual {v0}, Lb2/d;->u()V

    invoke-virtual {p0}, Lc2/g;->C()V

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->b:Lc2/j;

    iget-object v0, v0, Lc2/j;->i:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->j:Lf2/u;

    iget-object v0, v0, Lf2/u;->C:Lq2/p;

    const/16 v1, 0xf

    invoke-virtual {v0, v1}, Lq2/p;->j(I)Z

    move-result v0

    if-eqz v0, :cond_3

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->y:Lb2/i;

    const-wide/16 v1, 0xbb8

    invoke-virtual {v0, v1, v2}, Lb2/i;->c(J)V

    goto :goto_0

    :cond_3
    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->y:Lb2/i;

    invoke-virtual {v0, v4, v5}, Lb2/i;->c(J)V

    :goto_0
    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->H:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    sget-object v0, LW1/b;->v:Lc2/d;

    const/16 v1, 0x45

    invoke-virtual {v0, v1}, Lc2/d;->e(I)Z

    move-result v0

    if-nez v0, :cond_4

    sget-object v0, LW1/b;->s:Lc2/c;

    invoke-virtual {v0}, Lc2/c;->o0()V

    :cond_4
    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->a:Lf2/y;

    invoke-virtual {v0}, Lf2/y;->z()V

    const/4 v0, 0x3

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lb2/l;->g(II)V

    return-void
.end method

.method public f()I
    .locals 2

    invoke-virtual {p0}, Lc2/g;->h()I

    move-result v0

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    sget-object v0, Lc2/g;->s:[I

    invoke-virtual {p0}, Lc2/g;->h()I

    move-result v1

    aget v0, v0, v1

    return v0
.end method

.method public g()I
    .locals 6

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->H:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    sget-object v2, Lc2/g;->u:[I

    array-length v3, v2

    div-int/lit8 v3, v3, 0x2

    aget v3, v2, v3

    int-to-long v3, v3

    cmp-long v5, v0, v3

    if-gez v5, :cond_0

    array-length v0, v2

    div-int/lit8 v0, v0, 0x2

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    sget-object v1, Lc2/g;->u:[I

    array-length v2, v1

    if-ge v0, v2, :cond_2

    sget-object v2, LW1/b;->s:Lc2/c;

    iget-object v2, v2, Lc2/c;->H:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v2

    aget v1, v1, v0

    int-to-long v4, v1

    cmp-long v1, v2, v4

    if-ltz v1, :cond_1

    return v0

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    const/4 v0, -0x1

    return v0
.end method

.method public h()I
    .locals 6

    const/4 v0, 0x0

    :goto_0
    sget-object v1, Lc2/g;->s:[I

    array-length v2, v1

    if-ge v0, v2, :cond_1

    sget-object v2, LW1/b;->s:Lc2/c;

    iget-object v2, v2, Lc2/c;->H:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v2

    aget v1, v1, v0

    int-to-long v4, v1

    cmp-long v1, v2, v4

    if-ltz v1, :cond_0

    return v0

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, -0x1

    return v0
.end method

.method public i(I)J
    .locals 4

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    aget-object p1, v0, p1

    invoke-virtual {p1}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0xa

    add-long/2addr v0, v2

    return-wide v0
.end method

.method public j()Lb2/d;
    .locals 2

    invoke-virtual {p0}, Lc2/g;->g()I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    sget-object v1, Lc2/g;->v:[Lb2/d;

    aget-object v0, v1, v0

    return-object v0

    :cond_0
    sget-object v0, Lc2/g;->w:Lb2/d;

    return-object v0
.end method

.method public l()J
    .locals 6

    invoke-direct {p0}, Lc2/g;->m()J

    move-result-wide v0

    invoke-direct {p0}, Lc2/g;->q()J

    move-result-wide v2

    mul-long v0, v0, v2

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v2}, Lh2/b;->G()I

    move-result v2

    add-int/lit8 v2, v2, 0x64

    int-to-long v2, v2

    mul-long v0, v0, v2

    const-wide/16 v2, 0x64

    div-long/2addr v0, v2

    sget-object v4, LW1/b;->t:Lf2/i;

    iget-object v4, v4, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v4}, Lh2/a;->z()I

    move-result v4

    add-int/lit8 v4, v4, 0x64

    int-to-long v4, v4

    mul-long v0, v0, v4

    div-long/2addr v0, v2

    invoke-static {}, Lk2/h;->e()J

    move-result-wide v4

    add-long/2addr v4, v2

    mul-long v0, v0, v4

    div-long/2addr v0, v2

    invoke-static {}, Le2/b;->l()I

    move-result v4

    add-int/lit8 v4, v4, 0x64

    int-to-long v4, v4

    mul-long v0, v0, v4

    div-long/2addr v0, v2

    invoke-static {}, Lm2/a;->g()I

    move-result v4

    add-int/lit8 v4, v4, 0x64

    int-to-long v4, v4

    mul-long v0, v0, v4

    div-long/2addr v0, v2

    sget-object v4, LW1/b;->t:Lf2/i;

    iget-object v4, v4, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v4}, Lh2/a;->A()I

    move-result v4

    add-int/lit8 v4, v4, 0x64

    int-to-long v4, v4

    mul-long v0, v0, v4

    div-long/2addr v0, v2

    return-wide v0
.end method

.method public n()J
    .locals 5

    iget-object v0, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0xa

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    iget-object v0, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v0, v2, v3}, Lb2/i;->c(J)V

    :cond_0
    const-wide/16 v0, 0x1

    const/4 v2, 0x0

    :goto_0
    const/16 v3, 0xa

    if-ge v2, v3, :cond_1

    invoke-virtual {p0, v2}, Lc2/g;->i(I)J

    move-result-wide v3

    mul-long v0, v0, v3

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-wide v0
.end method

.method public o()Lb2/d;
    .locals 4

    iget-object v0, p0, Lc2/g;->k:Lb2/d;

    const-wide/16 v1, 0x1

    invoke-virtual {v0, v1, v2}, Lb2/d;->w(J)V

    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0xa

    if-ge v0, v1, :cond_0

    iget-object v1, p0, Lc2/g;->k:Lb2/d;

    invoke-virtual {p0, v0}, Lc2/g;->i(I)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lb2/d;->r(J)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lc2/g;->k:Lb2/d;

    sget-object v1, LW1/b;->s:Lc2/c;

    iget-object v1, v1, Lc2/c;->j:Lb2/d;

    invoke-virtual {v1}, Lb2/d;->g()I

    move-result v1

    invoke-virtual {v0, v1}, Lb2/d;->A(I)V

    iget-object v0, p0, Lc2/g;->k:Lb2/d;

    return-object v0
.end method

.method public p()I
    .locals 6

    iget-object v0, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    sget v2, Lc2/g;->q:I

    int-to-long v2, v2

    const/4 v4, 0x1

    cmp-long v5, v0, v2

    if-gez v5, :cond_0

    return v4

    :cond_0
    invoke-virtual {p0}, Lc2/g;->h()I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_1

    sget-object v1, Lc2/g;->t:[I

    aget v4, v1, v0

    :cond_1
    return v4
.end method

.method public r()J
    .locals 2

    iget-object v0, p0, Lc2/g;->p:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    return-wide v0
.end method

.method public s()J
    .locals 6

    iget-object v0, p0, Lc2/g;->o:[J

    iget-object v1, p0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    long-to-int v2, v1

    aget-wide v1, v0, v2

    const-wide/16 v3, 0x64

    mul-long v1, v1, v3

    long-to-double v0, v1

    sget-object v2, LW1/b;->s:Lc2/c;

    iget-object v2, v2, Lc2/c;->e0:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v2

    const-wide/16 v4, 0x1

    sub-long/2addr v2, v4

    long-to-double v2, v2

    const-wide/high16 v4, 0x4059000000000000L    # 100.0

    add-double/2addr v2, v4

    div-double/2addr v0, v2

    double-to-long v0, v0

    return-wide v0
.end method

.method public t(Lc2/i;Z)D
    .locals 9

    invoke-virtual {p1}, Lc2/i;->e()I

    move-result v0

    sget-object v1, LW1/b;->v:Lc2/d;

    const/16 v2, 0x6d

    invoke-virtual {v1, v2}, Lc2/d;->e(I)Z

    move-result v1

    if-eqz v1, :cond_0

    sget-object v1, LW1/b;->s:Lc2/c;

    iget-object v1, v1, Lc2/c;->I:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->e()I

    move-result v1

    if-le v1, v0, :cond_0

    sget-object v1, LW1/b;->s:Lc2/c;

    iget-object v1, v1, Lc2/c;->I:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->e()I

    move-result v1

    const/16 v2, 0x3a2

    if-gt v1, v2, :cond_0

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->I:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->e()I

    move-result v0

    :cond_0
    int-to-double v0, v0

    const-wide v2, 0x408f400000000000L    # 1000.0

    div-double/2addr v0, v2

    sget-object v2, LW1/b;->s:Lc2/c;

    iget-object v2, v2, Lc2/c;->a:Lc2/k;

    invoke-virtual {v2}, Lc2/k;->r()J

    move-result-wide v2

    long-to-double v2, v2

    const-wide v4, 0x3fa999999999999aL    # 0.05

    mul-double v2, v2, v4

    const-wide/high16 v4, 0x3ff0000000000000L    # 1.0

    add-double/2addr v2, v4

    mul-double v0, v0, v2

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->j:Lf2/u;

    iget-object v2, v2, Lf2/u;->C:Lq2/p;

    const/16 v3, 0x26

    invoke-virtual {v2, v3}, Lq2/p;->j(I)Z

    move-result v2

    if-eqz v2, :cond_1

    const-wide/high16 v2, 0x4000000000000000L    # 2.0

    mul-double v0, v0, v2

    :cond_1
    sget-object v2, LW1/b;->v:Lc2/d;

    iget-object v2, v2, Lc2/d;->j:LX1/c;

    const/16 v3, 0x320

    invoke-virtual {v2, v3}, LX1/c;->m(I)Z

    move-result v2

    if-eqz v2, :cond_2

    const-wide/high16 v2, 0x4014000000000000L    # 5.0

    mul-double v0, v0, v2

    :cond_2
    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v2}, Lh2/b;->F()I

    move-result v2

    const-wide/high16 v3, 0x4059000000000000L    # 100.0

    if-lez v2, :cond_3

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v2}, Lh2/b;->F()I

    move-result v2

    add-int/lit8 v2, v2, 0x64

    int-to-double v5, v2

    div-double/2addr v5, v3

    mul-double v0, v0, v5

    :cond_3
    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v2}, Lh2/a;->x()I

    move-result v2

    if-lez v2, :cond_4

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v2}, Lh2/a;->x()I

    move-result v2

    add-int/lit8 v2, v2, 0x64

    int-to-double v5, v2

    div-double/2addr v5, v3

    mul-double v0, v0, v5

    :cond_4
    invoke-static {}, Lk2/h;->d()J

    move-result-wide v5

    const-wide/16 v7, 0x0

    cmp-long v2, v5, v7

    if-lez v2, :cond_5

    const-wide/16 v5, 0x64

    invoke-static {}, Lk2/h;->d()J

    move-result-wide v7

    add-long/2addr v7, v5

    long-to-double v5, v7

    div-double/2addr v5, v3

    mul-double v0, v0, v5

    :cond_5
    invoke-static {}, Le2/b;->k()I

    move-result v2

    if-lez v2, :cond_6

    invoke-static {}, Le2/b;->k()I

    move-result v2

    add-int/lit8 v2, v2, 0x64

    int-to-double v5, v2

    div-double/2addr v5, v3

    mul-double v0, v0, v5

    :cond_6
    invoke-static {}, Lm2/a;->f()I

    move-result v2

    if-lez v2, :cond_7

    invoke-static {}, Lm2/a;->f()I

    move-result v2

    add-int/lit8 v2, v2, 0x64

    int-to-double v5, v2

    div-double/2addr v5, v3

    mul-double v0, v0, v5

    :cond_7
    if-eqz p2, :cond_8

    invoke-static {}, Lm2/a;->e()I

    move-result p2

    add-int/lit8 p2, p2, 0x64

    int-to-double v5, p2

    div-double/2addr v5, v3

    mul-double v0, v0, v5

    :cond_8
    iget p2, p1, Lc2/i;->h:I

    iget p1, p1, Lc2/i;->i:I

    invoke-static {p2, p1}, Lj2/a;->g(II)F

    move-result p1

    float-to-double p1, p1

    mul-double v0, v0, p1

    return-wide v0
.end method

.method public u(I)J
    .locals 2

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    aget-object p1, v0, p1

    invoke-virtual {p1}, Lb2/i;->d()J

    move-result-wide v0

    return-wide v0
.end method

.method public v()Ljava/lang/String;
    .locals 3

    const-string v0, ""

    const/4 v1, 0x0

    :goto_0
    iget-object v2, p0, Lc2/g;->l:[Lb2/i;

    array-length v2, v2

    if-ge v1, v2, :cond_1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    aget-object v0, v0, v1

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lc2/g;->l:[Lb2/i;

    array-length v2, v2

    add-int/lit8 v2, v2, -0x1

    if-eq v1, v2, :cond_0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ","

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method public w()I
    .locals 5

    const/4 v0, 0x0

    const/4 v1, 0x0

    :goto_0
    iget-object v2, p0, Lc2/g;->l:[Lb2/i;

    array-length v3, v2

    if-ge v0, v3, :cond_0

    int-to-long v3, v1

    aget-object v1, v2, v0

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    add-long/2addr v3, v1

    long-to-int v1, v3

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return v1
.end method

.method public x(I)V
    .locals 6

    invoke-virtual {p0}, Lc2/g;->r()J

    move-result-wide v0

    iget-object v2, p0, Lc2/g;->l:[Lb2/i;

    aget-object p1, v2, p1

    const-wide/16 v2, 0x1

    invoke-virtual {p1, v2, v3}, Lb2/i;->a(J)V

    invoke-virtual {p0}, Lc2/g;->D()V

    const/4 p1, 0x2

    const/4 v2, 0x1

    invoke-static {p1, v2}, Lb2/l;->g(II)V

    invoke-virtual {p0}, Lc2/g;->r()J

    move-result-wide v2

    const-wide/16 v4, 0x258

    cmp-long p1, v2, v4

    if-nez p1, :cond_0

    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->y0:Lh2/a;

    invoke-virtual {p1}, Lh2/a;->V()V

    :cond_0
    invoke-virtual {p0}, Lc2/g;->r()J

    move-result-wide v2

    cmp-long p1, v2, v0

    if-lez p1, :cond_1

    invoke-virtual {p0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0xbb8

    cmp-long p1, v0, v2

    if-lez p1, :cond_1

    invoke-static {}, LW1/a;->a()V

    :cond_1
    return-void
.end method

.method public y(Ljava/lang/String;)V
    .locals 12

    const-string v0, ";"

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lc2/g;->a:Lb2/i;

    const/4 v1, 0x0

    aget-object v2, p1, v1

    invoke-static {v2}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Lb2/i;->c(J)V

    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    const/4 v2, 0x1

    aget-object v3, p1, v2

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v3

    invoke-virtual {v0, v3, v4}, Lb2/i;->c(J)V

    iget-object v0, p0, Lc2/g;->g:Lb2/d;

    const/4 v3, 0x2

    aget-object v4, p1, v3

    invoke-virtual {v0, v4}, Lb2/d;->o(Ljava/lang/String;)V

    const/4 v0, 0x3

    aget-object v4, p1, v0

    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4

    iput v4, p0, Lc2/g;->f:I

    const/4 v4, 0x4

    aget-object v5, p1, v4

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    iput v5, p0, Lc2/g;->e:I

    const/4 v5, 0x5

    aget-object v6, p1, v5

    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v6

    int-to-long v6, v6

    iput-wide v6, p0, Lc2/g;->c:J

    iget-object v6, p0, Lc2/g;->j:Lb2/i;

    const/4 v7, 0x6

    aget-object v8, p1, v7

    invoke-static {v8}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v8

    int-to-long v8, v8

    invoke-virtual {v6, v8, v9}, Lb2/i;->c(J)V

    iget-wide v8, p0, Lc2/g;->c:J

    const-wide/16 v10, -0x2af8

    cmp-long v6, v8, v10

    if-eqz v6, :cond_0

    iput-wide v10, p0, Lc2/g;->c:J

    :cond_0
    iget-object v6, p0, Lc2/g;->l:[Lb2/i;

    aget-object v1, v6, v1

    const/4 v6, 0x7

    aget-object v8, p1, v6

    invoke-static {v8}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v8

    int-to-long v8, v8

    invoke-virtual {v1, v8, v9}, Lb2/i;->c(J)V

    iget-object v1, p0, Lc2/g;->l:[Lb2/i;

    aget-object v1, v1, v2

    const/16 v8, 0x8

    aget-object v9, p1, v8

    invoke-static {v9}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v9

    int-to-long v9, v9

    invoke-virtual {v1, v9, v10}, Lb2/i;->c(J)V

    iget-object v1, p0, Lc2/g;->l:[Lb2/i;

    aget-object v1, v1, v3

    const/16 v3, 0x9

    aget-object v9, p1, v3

    invoke-static {v9}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v9

    int-to-long v9, v9

    invoke-virtual {v1, v9, v10}, Lb2/i;->c(J)V

    iget-object v1, p0, Lc2/g;->l:[Lb2/i;

    aget-object v0, v1, v0

    const/16 v1, 0xa

    aget-object v1, p1, v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    int-to-long v9, v1

    invoke-virtual {v0, v9, v10}, Lb2/i;->c(J)V

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    aget-object v0, v0, v4

    const/16 v1, 0xb

    aget-object v1, p1, v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    int-to-long v9, v1

    invoke-virtual {v0, v9, v10}, Lb2/i;->c(J)V

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    aget-object v0, v0, v5

    const/16 v1, 0xc

    aget-object v1, p1, v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    int-to-long v4, v1

    invoke-virtual {v0, v4, v5}, Lb2/i;->c(J)V

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    aget-object v0, v0, v7

    const/16 v1, 0xd

    aget-object v1, p1, v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    int-to-long v4, v1

    invoke-virtual {v0, v4, v5}, Lb2/i;->c(J)V

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    aget-object v0, v0, v6

    const/16 v1, 0xe

    aget-object v1, p1, v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    int-to-long v4, v1

    invoke-virtual {v0, v4, v5}, Lb2/i;->c(J)V

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    aget-object v0, v0, v8

    const/16 v1, 0xf

    aget-object v1, p1, v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    int-to-long v4, v1

    invoke-virtual {v0, v4, v5}, Lb2/i;->c(J)V

    iget-object v0, p0, Lc2/g;->l:[Lb2/i;

    aget-object v0, v0, v3

    const/16 v1, 0x10

    aget-object v1, p1, v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    int-to-long v3, v1

    invoke-virtual {v0, v3, v4}, Lb2/i;->c(J)V

    const/16 v0, 0x11

    :try_start_0
    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0

    iput-wide v0, p0, Lc2/g;->m:D
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    :try_start_1
    iget-object v0, p0, Lc2/g;->d:Lb2/i;

    const/16 v1, 0x12

    aget-object v1, p1, v1

    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v3

    invoke-virtual {v0, v3, v4}, Lb2/i;->c(J)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    invoke-virtual {p0}, Lc2/g;->C()V

    invoke-virtual {p0}, Lc2/g;->D()V

    array-length v0, p1

    const/16 v1, 0x13

    if-le v0, v1, :cond_1

    aget-object v0, p1, v1

    const-string v3, "#"

    invoke-virtual {v0, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    aget-object p1, p1, v1

    invoke-virtual {p1, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, LW1/a;->e(Ljava/lang/String;)V

    goto :goto_2

    :cond_1
    invoke-virtual {p0}, Lc2/g;->r()J

    move-result-wide v0

    invoke-static {v0, v1}, LW1/a;->d(J)V

    :goto_2
    return-void
.end method

.method public z()V
    .locals 7

    invoke-virtual {p0}, Lc2/g;->C()V

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v0}, Lc2/k;->s()J

    move-result-wide v0

    const-wide/16 v2, 0xa

    const-wide/16 v4, 0x14

    cmp-long v6, v0, v2

    if-gez v6, :cond_0

    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v1

    div-long/2addr v1, v4

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    goto :goto_0

    :cond_0
    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v0}, Lc2/k;->s()J

    move-result-wide v0

    cmp-long v2, v0, v4

    if-gez v2, :cond_1

    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v1

    const-wide/16 v3, 0x1e

    div-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lc2/g;->b:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v1

    const-wide/16 v3, 0x28

    div-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    :goto_0
    return-void
.end method
